#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 5e4+5;
int arr[N];
const int inf= -1e18;
struct Node{
    int l_o,r_o,b_o,b_c;
    Node(){
        l_o = r_o = b_o = b_c = inf;
    }
};
Node tree[4*N];
struct SegTree {
    #define lf (root << 1)
    #define rt ((root << 1) | 1)

    SegTree() {}
    inline Node milao(Node x, Node y) {
        if (x.l_o == inf) return y;
        if (y.l_o == inf) return x;
        Node temp;
        temp.l_o=max(x.l_o, x.b_o + y.l_o);
        temp.r_o=max(y.r_o, x.r_o + y.b_o);
        temp.b_o=x.b_o+y.b_o;
        temp.b_c=max({x.r_o+y.l_o, x.b_c, y.b_c});
        return temp;
    }

    inline void prop(int root) {
        tree[root] = milao(tree[lf], tree[rt]);
    }

    void build(int root, int lo, int hi) {
        if (lo == hi) {
            tree[root].l_o=arr[lo];
            tree[root].r_o=arr[lo];
            tree[root].b_o=arr[lo];
            tree[root].b_c=arr[lo];
            return;
        }
        int mid = (lo + hi) >> 1;
        build(lf, lo, mid);
        build(rt, mid + 1, hi);
        prop(root);
    }

    void update(int root, int lo, int hi, int idx, int val) {
        if (lo == hi) {
            tree[root].l_o = val;
            tree[root].r_o = val;
            tree[root].b_o = val;
            tree[root].b_c = val;
            arr[idx] = val;
            return;
        }
        int mid = (lo + hi) >> 1;
        if (idx <= mid)
            update(lf, lo, mid, idx, val);
        else
            update(rt, mid + 1, hi, idx, val);
        prop(root);
    }

    Node query(int root, int lo, int hi, int i, int j) {
        if (j < lo || hi < i) return Node();
        if (i <= lo && hi <= j) return tree[root];
        int mid = (lo + hi) >> 1;
        return milao(query(lf, lo, mid, i, j), query(rt, mid + 1, hi, i, j));
    }
};

void solve() {
    int n;
    cin>>n;
    SegTree segTree;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    segTree.build(1, 1, n);
    int q;
    cin>>q;
    while(q--){
        int type;
        cin>>type;
        if(type==0){
            int x,y;
            cin>>x>>y;
            segTree.update(1, 1, n, x, y);
        }
        else {
            int l,r;
            cin>>l>>r;
            Node result = segTree.query(1, 1, n, l, r);
            cout<<max({result.b_c,result.l_o,result.r_o,result.b_o})<<"\n";
        }
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
