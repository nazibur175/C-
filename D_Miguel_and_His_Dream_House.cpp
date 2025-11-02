#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
#define int long long
typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update>indexed_set;
const int N = 2e6 + 5;
#define mod  999999599
#define mod1 117
#define mod2 999999667
int arr[N];
int Tree[4 * N];

struct SegTree {
    #define lf (root << 1)
    #define rt ((root << 1) | 1)

    SegTree() {}

    inline int milao(int x, int y) {
        return (x^y);
    }

    inline void prop(int root) {
        Tree[root] = milao(Tree[lf], Tree[rt]);
    }

    void build(int root, int lo, int hi) {
        if (lo == hi) {
            Tree[root] = arr[lo];
            return;
        }
        int mid = (lo + hi) >> 1;
        build(lf, lo, mid);
        build(rt, mid + 1, hi);
        prop(root);
    }

    void update(int root, int lo, int hi, int idx, int val) {
        if (lo == hi) {
            Tree[root] = val;
            return;
        }
        int mid = (lo + hi) >> 1;
        if (idx <= mid)
            update(lf, lo, mid, idx, val);
        else
            update(rt, mid + 1, hi, idx, val);
        prop(root);
    }

    int query(int root, int lo, int hi, int i, int j) {
        if (j < lo || hi < i) return 0;
        if (i <= lo && hi <= j) return Tree[root];
        int mid = (lo + hi) >> 1;
        return milao(query(lf, lo, mid, i, j), query(rt, mid + 1, hi, i, j));
    }
};

int bigmod(int a,int b){
    int res=1;
    while(b>0){
        if(b%2==1) res=(res*a)%mod;
        a=(a*a)%mod;
        b/=2;
    }
    return res;
}
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
int my_rand(int l,int r){
    return uniform_int_distribution<int>(l,r)(rng);
}
void solve() {
    int n, q;
    cin >> n >> q;
    map<int,int>m;
    for (int i = 1; i <= n; i++){
        int x;
        cin>>x;
        if(!m[x]){
            m[x]=bigmod(x+223,mod2);
        }
        arr[i]=m[x];
    }

    // for(int i=1;i<=n;i++) cout<<a[i]<<" ";
    // cout<<endl;
    SegTree seg;
    seg.build(1, 1, n);
    indexed_set s;
    for(int i=1;i<=n;i++)
        s.insert(i);
    
    while (q--) {
        int type;
        cin>>type;
        int inn=0;
        if(type==1){
            int in,val;
            cin>>in>>val;
            if(m[val]==0){
                m[val]=bigmod(val+223,mod2);
            }
            val=m[val];
            // cout<<in<<" "<<val<<endl;
            inn=*s.find_by_order(in-1);
            // cout<<inn<<endl;
            seg.update(1,1,n,inn,val);
        }
        else if(type==2){
            int in;
            cin>>in;
            inn=*s.find_by_order(in-1);
            // cout<<inn<<endl;
            seg.update(1,1,n,inn,0ll);
            s.erase(s.find_by_order(in-1));
            // inn=*s.find_by_order(in-1);
            // cout<<inn<<endl;
        }
        else {
            int l,r;
            cin>>l>>r;
            if(l>r) swap(l,r);
            l=*s.find_by_order(l-1);
            r=*s.find_by_order(r-1);
            // cout<<l<<" "<<r<<endl;
            int ans=seg.query(1,1,n,l,r);
            // cout<<ans<<endl;
            if(ans==0) cout<<"Happy"<<endl;
            else cout<<"Unhappy"<<endl;
            // cout<<ans<<endl;
            // for(int i=1;i<=n;i++){
            //     cout<<seg.query(1,1,n,i,i)<<endl;
            // }
        }
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
