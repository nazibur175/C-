// YouKnow Who template with simple modification 
// Max niye kaj kore

#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 9, LG = 18, inf = 1e9 + 9;

// Segment Tree for range max & lazy add update on paths or subtrees
struct ST {
#define lc (n << 1)
#define rc ((n << 1) | 1)
  int t[4 * N], lazy[4 * N];

  // Constructor: Initialize tree and lazy arrays
  ST() {
    fill(t, t + 4 * N, -inf);
    fill(lazy, lazy + 4 * N, 0);
  }

  // push: Propagate lazy update from node n to its children.
  // Called at the start of upd/query whenever there might be pending updates.
  inline void push(int n, int b, int e) {
    if (lazy[n] == 0) return;
    t[n] += lazy[n];
    if (b != e) {
      lazy[lc] += lazy[n];
      lazy[rc] += lazy[n];
    }
    lazy[n] = 0;
  }

  // combine: Merge results of left & right queries. Used in query().
  inline int combine(int a, int b) {
    return max(a, b);
  }

  // pull: Calculate parent's value from children. Called after update/build.
  inline void pull(int n) {
    t[n] = max(t[lc], t[rc]);
  }

  // build: Initialize the segment tree for range [b,e].
  // Called in main() after HLD dfs_hld() mapping. All values set to 0.
  void build(int n, int b, int e) {
    if (b == e) {
      t[n] = 0;
      return;
    }
    int mid = (b + e) >> 1;
    build(lc, b, mid);
    build(rc, mid + 1, e);
    pull(n);
  }

  // upd: Add value v to all elements in range [i,j].
  // Used for both subtree and path updates.
  void upd(int n, int b, int e, int i, int j, int v) {
    push(n, b, e);
    if (j < b || e < i) return;
    if (i <= b && e <= j) {
      lazy[n] += v;
      push(n, b, e);
      return;
    }
    int mid = (b + e) >> 1;
    upd(lc, b, mid, i, j, v);
    upd(rc, mid + 1, e, i, j, v);
    pull(n);
  }

  // query: Return max in range [i,j].
  // Used for both subtree and path queries.
  int query(int n, int b, int e, int i, int j) {
    push(n, b, e);
    if (i > e || b > j) return -inf;
    if (i <= b && e <= j) return t[n];
    int mid = (b + e) >> 1;
    return combine(query(lc, b, mid, i, j), query(rc, mid + 1, e, i, j));
  }
} t;

vector<int> g[N];
int par[N][LG + 1], dep[N], sz[N];

// dfs: Preprocesses parent, depth, and subtree size arrays & sets heavy child first in g[u].
// Called once from main() after reading the tree.
void dfs(int u, int p = 0) {
  par[u][0] = p;
  dep[u] = dep[p] + 1;
  sz[u] = 1;
  for (int i = 1; i <= LG; i++) par[u][i] = par[par[u][i - 1]][i - 1];
  if (p) g[u].erase(find(g[u].begin(), g[u].end(), p));
  for (auto &v : g[u]) if (v != p) {
      dfs(v, u);
      sz[u] += sz[v];
      // Maintain heavy child at g[u][0]
      if (sz[v] > sz[g[u][0]]) swap(v, g[u][0]);
    }
}

// lca: Computes lowest common ancestor of nodes u and v.
// Called from query() and update_path().
int lca(int u, int v) {
    if (dep[u] < dep[v]) swap(u, v);
    for (int k = LG; k >= 0; k--) if (dep[par[u][k]] >= dep[v]) u = par[u][k];
    if (u == v) return u;
    for (int k = LG; k >= 0; k--) if (par[u][k] != par[v][k]) u = par[u][k], v = par[v][k];
    return par[u][0];
}

// kth: Finds k-th ancestor of node u.
// Used in query() and update_path().
int kth(int u, int k) {
    assert(k >= 0);
    for (int i = 0; i <= LG; i++) if (k & (1 << i)) u = par[u][i];
    return u;
}

int T, head[N], st[N], en[N];

// dfs_hld: Heavy-Light Decomposition DFS. Maps each node to a segment tree position st[u] and en[u].
// Called once from main() after dfs().
void dfs_hld(int u) {
    st[u] = ++T;
    for (auto v : g[u]) {
        head[v] = (v == g[u][0] ? head[u] : v); // heavy edge inherits the chain
        dfs_hld(v);
    }
    en[u] = T;
}
int n;

// query_up: Query the max value moving up from u to v (on same chain or split chains).
// Used as a helper in query() and update_path().
int query_up(int u, int v) {
    int ans = -inf;
    while (head[u] != head[v]) {
        ans = max(ans, t.query(1, 1, n, st[head[u]], st[u]));
    u = par[head[u]][0];
  }
  ans = max(ans, t.query(1, 1, n, st[v], st[u])); // single chain
  return ans;
}

// query: Returns max value along the path from u to v.
// Called from main() for path queries.
int query(int u, int v) {
  int l = lca(u, v);
  int ans = query_up(u, l);
  if (v != l) ans = max(ans, query_up(v, kth(v, dep[v] - dep[l] - 1)));
  return ans;
}

// update_up: Add value val to the path from u up to v (possibly split chains).
// Used as a helper in update_path().
void update_up(int u, int v, int val) {
  while (head[u] != head[v]) {
    t.upd(1, 1, n, st[head[u]], st[u], val);
    u = par[head[u]][0];
  }
  t.upd(1, 1, n, st[v], st[u], val); // single chain
}

// update_path: Add value val on the entire path from u to v.
// Called from main() for add_path queries.
void update_path(int u, int v, int val) {
  int l = lca(u, v);
  update_up(u, l, val);
  if (v != l) update_up(v, kth(v, dep[v] - dep[l] - 1), val);
}


int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  // Read tree structure
  cin >> n;
  for (int i = 1; i < n; i++) {
    int u, v;
    cin >> u >> v;
    g[u].push_back(v);
    g[v].push_back(u);
  }
  // Setup HLD and segment tree mappings
  dfs(1);
  head[1] = 1;
  dfs_hld(1);
  int q;
  cin >> q;
  t.build(1, 1, n);

  // Main query loop
  while (q--) {
    string ty;
    int u, v;
    cin >> ty >> u >> v;
    if (ty == "add") {
      // Increase all nodes in subtree of u by v
      t.upd(1, 1, n, st[u], en[u], v);
    } else if (ty == "add_path") {
      // Increase all nodes on the path from u to v by val
      int val = v;
      cin >> u >> v; // ty add_path u v val
      update_path(u, v, val);
    } else {
      // Query max value on path u-v
      cout << query(u, v) << '\n';
    }
  }
  return 0;
}



/*

// Type -2 
// Here I used my segment tree
// Sum 

#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 2e5+9, LG = 18, inf = 1e18;
int arr[N];
int lazy[4*N], tree[4*N]; // For Seg_tree

// Segment tree for range add & range sum with lazy propagation
struct Seg_tree {
    #define lf (root<<1)
    #define rt ((root<<1)|1)
    Seg_tree() {}
    inline void push(int root, int lo, int hi) {
        if(lazy[root] == 0) return;
        tree[root] += lazy[root] * (hi-lo+1); // Range add
        if(lo != hi) {
            lazy[lf] += lazy[root];
            lazy[rt] += lazy[root];
        }
        lazy[root] = 0;
    }
    inline int milao(int x, int y) {
        return x+y;
    }
    inline void prop(int root) {
        tree[root] = tree[lf] + tree[rt];
    }
    void build(int root, int lo, int hi) {
        lazy[root] = 0;
        if(lo == hi) {
            tree[root] = arr[lo];
            return;
        }
        int mid = (lo+hi)>>1;
        build(lf, lo, mid);
        build(rt, mid+1, hi);
        prop(root);
    }
    void update(int root, int lo, int hi, int i, int j, int val) {
        push(root, lo, hi);
        if(j < lo || hi < i) return;
        if(i <= lo && hi <= j) {
            lazy[root] += val;
            push(root, lo, hi);
            return;
        }
        int mid = (lo+hi)>>1;
        update(lf, lo, mid, i, j, val);
        update(rt, mid+1, hi, i, j, val);
        prop(root);
    }
    int query(int root, int lo, int hi, int i, int j) {
        push(root, lo, hi);
        if(i > hi || lo > j) return 0;  // 0 for sum query
        if(i <= lo && hi <= j) return tree[root];
        int mid = (lo+hi)>>1;
        return milao(query(lf, lo, mid, i, j), query(rt, mid+1, hi, i, j));
    }
} seg;

vector<int> g[N];
int par[N][LG+1], dep[N], sz[N], head[N], st[N], en[N], T=0;

// Standard HLD, LCA, etc.
void dfs(int u, int p = 0) {
    par[u][0] = p;
    dep[u] = dep[p] + 1;
    sz[u] = 1;
    for (int i = 1; i <= LG; i++) par[u][i]=par[par[u][i-1]][i-1];
    if (p) g[u].erase(find(g[u].begin(), g[u].end(), p));
    for (auto &v: g[u]) if(v!=p) {
        dfs(v, u);
        sz[u] += sz[v];
        if(sz[v]>sz[g[u][0]]) swap(v,g[u][0]);
    }
}
void dfs_hld(int u) {
    st[u]=++T;
    for(auto v: g[u]) {
        head[v]=(v==g[u][0]?head[u]:v);
        dfs_hld(v);
    }
    en[u]=T;
}
int lca(int u, int v){
    if (dep[u] < dep[v]) swap(u, v);
    for (int k = LG; k >= 0; k--) if(dep[par[u][k]]>=dep[v]) u=par[u][k];
    if(u==v) return u;
    for (int k = LG; k >= 0; k--) if (par[u][k] != par[v][k]) u=par[u][k],v=par[v][k];
    return par[u][0];
}
int kth(int u, int k){
    assert(k>=0);
    for(int i=0;i<=LG;i++) if(k&(1<<i))u=par[u][i];
    return u;
}
// HLD helpers
void add_path(int u, int v, int val) { // add val to all nodes on path u-v
    while(head[u]!=head[v]) {
        if(dep[head[u]] < dep[head[v]]) swap(u,v);
        seg.update(1,1,T,st[head[u]],st[u],val);
        u=par[head[u]][0];
    }
    if(dep[u]<dep[v]) swap(u,v);
    seg.update(1,1,T,st[v],st[u],val);
}
int query_path(int u, int v) { // sum on path u-v
    int res=0;
    while(head[u]!=head[v]) {
        if(dep[head[u]]<dep[head[v]]) swap(u,v);
        res += seg.query(1,1,T,st[head[u]],st[u]);
        u=par[head[u]][0];
    }
    if(dep[u]<dep[v]) swap(u,v);
    res += seg.query(1,1,T,st[v],st[u]);
    return res;
}
// Subtree helpers
void add_subtree(int u, int val) { seg.update(1,1,T,st[u],en[u],val);}
int query_subtree(int u) { return seg.query(1,1,T,st[u],en[u]);}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,q;
    cin>>n>>q;
    for(int i=1;i<=n;i++) cin>>arr[i];
    for(int i=1;i<n;i++) {
        int u,v; cin>>u>>v;
        g[u].push_back(v); g[v].push_back(u);
    }
    dfs(1); head[1]=1; dfs_hld(1);
    // Copy values from arr[] to their positions in st order
    int temp_arr[T+2]; // st[u] from 1 to n.
    for(int i=1;i<=n;i++) temp_arr[st[i]]=arr[i];
    for(int i=1;i<=n;i++) arr[i]=temp_arr[i];
    seg.build(1,1,n);
    while(q--) {
        int tp;
        cin>>tp;
        if(tp==1) { // point assign (u,x): set value at u to x
            int u,x;
            cin>>u>>x;
            int cur = seg.query(1,1,n,st[u],st[u]);
            seg.update(1,1,n,st[u],st[u],x-cur);
        } else if(tp==2) { // add to path
            int u,v,x; cin>>u>>v>>x;
            add_path(u,v,x);
        } else if(tp==3) { // query sum on path
            int u,v; cin>>u>>v;
            cout<<query_path(u,v)<<"\n";
        } else if(tp==4) { // add to subtree
            int u,x; cin>>u>>x;
            add_subtree(u,x);
        } else if(tp==5) { // query sum of subtree
            int u; cin>>u;
            cout<<query_subtree(u)<<"\n";
        }
    }
}

// Supported Operations:
// 1 u x – assign (set) value at node u to x.

// 2 u v x – add x to all nodes on the path u-v.

// 3 u v – sum of values on the path u-v.

// 4 u x – add x to all nodes in the subtree of u.

// 5 u  – sum of values in the subtree rooted at u.

*/