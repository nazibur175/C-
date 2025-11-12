/*Given a tree containing N(1e5) nodes. Each node has an integer value. 
You will be given Q(1e5) queries.In each query you will be given(u,v). 
You have to tell what is the minimum number that can be found in the 
path between u and v.*/

//DFS + Precomputation	O(N log N)	O(N log N)
//Each Query	O(log N)
#include <bits/stdc++.h>
using namespace std;

const int N = 100005;
int LOG;
vector<int> tree[N];
int level[N];
int sp[N][20];     // 2^k-th ancestor
int mn[N][20];     // minimum value up to that ancestor
int value[N];      // node values

void dfs(int node, int parent) {
    sp[node][0] = parent;
    mn[node][0] = value[parent] ? min(value[node], value[parent]) : value[node];
    level[node] = level[parent] + 1;

    for (int i = 1; i < LOG; i++) {
        int mid = sp[node][i - 1];
        sp[node][i] = sp[mid][i - 1];
        mn[node][i] = min(mn[node][i - 1], mn[mid][i - 1]);
    }

    for (int child : tree[node]) {
        if (child != parent)
            dfs(child, node);
    }
}

pair<int,int> lift_node(int node, int k) {
    int res = value[node];
    for (int i = 0; i < LOG; i++) {
        if (k & (1 << i)) {
            res = min(res, mn[node][i]);
            node = sp[node][i];
        }
    }
    return {node, res};
}

int min_on_path(int u, int v) {
    int ans = INT_MAX;
    if (level[u] < level[v]) swap(u, v);

    auto lifted = lift_node(u, level[u] - level[v]);
    u = lifted.first;
    ans = min(ans, lifted.second);

    if (u == v) return min(ans, value[u]);

    for (int i = LOG - 1; i >= 0; i--) {
        if (sp[u][i] != sp[v][i]) {
            ans = min({ans, mn[u][i], mn[v][i]});
            u = sp[u][i];
            v = sp[v][i];
        }
    }

    ans = min({ans, value[sp[u][0]], value[u], value[v]});
    return ans;
}

void solve() {
    
    int n, q;
    cin >> n >> q;
    
    for (int i = 1; i <= n; i++)
    cin >> value[i];
    
    for (int i = 1; i < n; i++) {
        int u, v;
        cin >> u >> v;
        tree[u].push_back(v);
        tree[v].push_back(u);
    }
    
    LOG = log2(n) + 1;
    level[0] = -1;
    memset(sp, 0, sizeof(sp));
    dfs(1, 0);

    while (q--) {
        int u, v;
        cin >> u >> v;
        cout << min_on_path(u, v) << '\n';
    }
    
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
