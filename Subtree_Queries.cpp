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
            int u;
            cin>>u;
            cout<<query_subtree(u)<<endl;
        } 
        // else if(tp==3) { // query sum on path
        //     int u,v; cin>>u>>v;
        //     cout<<query_path(u,v)<<"\n";
        // } else if(tp==4) { // add to subtree
        //     int u,x; cin>>u>>x;
        //     add_subtree(u,x);
        // } else if(tp==5) { // query sum of subtree
        //     int u; cin>>u;
        //     cout<<query_subtree(u)<<"\n";
        // }
    }
}
