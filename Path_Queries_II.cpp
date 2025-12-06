// TLE solutions 
#include <bits/stdc++.h>
using namespace std;
// #define int long long

const int N = 2e5 + 5, LG = 18, INF = 1e9+7;
int arr[N];
vector<int> g[N];
int par[N][LG + 1], dep[N], sz[N], head[N], st[N], en[N], T = 0;

// --- Segment Tree: Recursive for range add/max + Iterative for point update ---
struct SegTree {
    int n;
    vector<int> t, lazy;
    void build(int n_, int* a) {
        n = n_;
        t.assign(4 * n, 0LL);
        lazy.assign(4 * n, 0LL);
        build_recursive(1, 1, n, a);
    }
    void build_recursive(int node, int l, int r, int* a) {
        lazy[node] = 0;
        if (l == r) {
            t[node] = a[l];
            return;
        }
        int m = (l + r) >> 1;
        build_recursive(node<<1, l, m, a);
        build_recursive(node<<1|1, m+1, r, a);
        t[node] = max(t[node<<1], t[node<<1|1]);
    }
    // Push lazy to children
    void push(int node, int l, int r) {
        if (!lazy[node]) return;
        t[node] += lazy[node];
        if (l != r) {
            lazy[node<<1] += lazy[node];
            lazy[node<<1|1] += lazy[node];
        }
        lazy[node] = 0;
    }
    // Range add: set all in [ql, qr] to +val
    void range_add(int node, int l, int r, int ql, int qr, int val) {
        push(node, l, r);
        if (r < ql || l > qr) return;
        if (ql <= l && r <= qr) {
            lazy[node] += val;
            push(node, l, r);
            return;
        }
        int m = (l + r) >> 1;
        range_add(node<<1, l, m, ql, qr, val);
        range_add(node<<1|1, m+1, r, ql, qr, val);
        t[node] = max(t[node<<1], t[node<<1|1]);
    }
    void range_add(int l, int r, int val) { range_add(1, 1, n, l, r, val); }
    // Range max query
    int query(int node, int l, int r, int ql, int qr) {
        push(node, l, r);
        if (r < ql || l > qr) return -INF;
        if (ql <= l && r <= qr) return t[node];
        int m = (l + r) >> 1;
        return max(query(node<<1, l, m, ql, qr), query(node<<1|1, m+1, r, ql, qr));
    }
    int query(int l, int r) { return query(1, 1, n, l, r); }
    // Point assign (iterative, fast): set value at position p to val
    void setpoint(int p, int val) {
        int node = 1, l = 1, r = n;
        vector<int> nodes;
        while (l != r) {
            push(node, l, r);
            nodes.push_back(node);
            int m = (l + r) >> 1;
            if (p <= m) {
                node = node << 1; r = m;
            } else {
                node = node << 1 | 1; l = m + 1;
            }
        }
        push(node, l, r);
        t[node] = val;
        for (auto it = nodes.rbegin(); it != nodes.rend(); ++it) {
            int parent = *it;
            push(parent<<1, l, r);
            push(parent<<1|1, l, r); // Not strictly needed, but safe
            t[parent] = max(t[parent<<1], t[parent<<1|1]);
        }
    }
};

SegTree seg;

// ---- HLD & LCA ----
void dfs(int u, int p = 0) {
    par[u][0] = p;
    dep[u] = dep[p] + 1;
    sz[u] = 1;
    for (int i = 1; i <= LG; i++)
        par[u][i] = par[par[u][i - 1]][i - 1];
    if (p) g[u].erase(find(g[u].begin(), g[u].end(), p));
    for (auto& v : g[u]) if (v != p) {
        dfs(v, u);
        sz[u] += sz[v];
        if (sz[v] > sz[g[u][0]]) swap(v, g[u][0]);
    }
}
void dfs_hld(int u) {
    st[u] = ++T;
    for (auto v : g[u]) {
        head[v] = (v == g[u][0] ? head[u] : v);
        dfs_hld(v);
    }
    en[u] = T;
}
int lca(int u, int v) {
    if (dep[u] < dep[v]) swap(u, v);
    for (int k = LG; k >= 0; k--) if (dep[par[u][k]] >= dep[v]) u = par[u][k];
    if (u == v) return u;
    for (int k = LG; k >= 0; k--) if (par[u][k] != par[v][k]) u = par[u][k], v = par[v][k];
    return par[u][0];
}

// Range add along path u-v
void add_path(int u, int v, int val) {
    while (head[u] != head[v]) {
        if (dep[head[u]] < dep[head[v]]) swap(u, v);
        seg.range_add(st[head[u]], st[u], val);
        u = par[head[u]][0];
    }
    if (dep[u] < dep[v]) swap(u, v);
    seg.range_add(st[v], st[u], val);
}
// Max query along path u-v
int query_path(int u, int v) {
    int res = -INF;
    while (head[u] != head[v]) {
        if (dep[head[u]] < dep[head[v]]) swap(u, v);
        res = max(res, seg.query(st[head[u]], st[u]));
        u = par[head[u]][0];
    }
    if (dep[u] < dep[v]) swap(u, v);
    res = max(res, seg.query(st[v], st[u]));
    return res;
}
// Range add in subtree
void add_subtree(int u, int val) { seg.range_add(st[u], en[u], val); }
// Max query in subtree
int query_subtree(int u) { return seg.query(st[u], en[u]); }

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, q;
    cin >> n >> q;
    for (int i = 1; i <= n; i++) cin >> arr[i];
    for (int i = 1; i < n; i++) {
        int u, v; cin >> u >> v;
        g[u].push_back(v); g[v].push_back(u);
    }
    dfs(1); head[1] = 1; dfs_hld(1);
    int temp_arr[N];
    for (int i = 1; i <= n; i++) temp_arr[st[i]] = arr[i];
    seg.build(n, temp_arr);
    while (q--) {
        int typ;
        cin >> typ;
        if (typ == 1) {
            int u, x; cin >> u >> x;
            seg.setpoint(st[u], x);
        } else if (typ == 2) {
            int u, v; cin >> u >> v;
            cout << query_path(u, v) << " ";
        } 
        // else if (typ == 3) {
        //     int u, v, val; cin >> u >> v >> val;
        //     add_path(u, v, val);
        // } else if (typ == 4) {
        //     int u, val; cin >> u >> val;
        //     add_subtree(u, val);
        // } else if (typ == 5) {
        //     int u; cin >> u;
        //     cout << query_subtree(u) << "\n";
        // }
    }
    return 0;
}
