#include <bits/stdc++.h>
using namespace std;
#define int long long
#define test int t; cin>>t; while(t--)
const int inf=1e9;
const int N = 2e5 + 5;
int arr[N];
int tree[4 * N];

struct SegTree {
    #define lf (root << 1)
    #define rt ((root << 1) | 1)

    SegTree() {}

    inline int milao(int x, int y) {
        return min(x,y);
    }

    inline void prop(int root) {
        tree[root] = milao(tree[lf], tree[rt]);
    }

    void build(int root, int lo, int hi) {
        if (lo == hi) {
            tree[root] = arr[lo];
            return;
        }
        int mid = (lo + hi) >> 1;
        build(lf, lo, mid);
        build(rt, mid + 1, hi);
        prop(root);
    }

    void update(int root, int lo, int hi, int idx, int val) {
        if (lo == hi) {
            tree[root] = val;
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
        if (j < lo || hi < i) return inf;
        if (i <= lo && hi <= j) return tree[root];
        int mid = (lo + hi) >> 1;
        return milao(query(lf, lo, mid, i, j), query(rt, mid + 1, hi, i, j));
    }
};

void solve() {
    // test{
        // for(int i=1;i<=4*N;i++) tree[i]=0;
        int n,k;
        cin>>n>>k;
        for(int i=1;i<=n;i++) cin>>arr[i];
        for(int i=n+1;i<=2*n;i++){
            arr[i]=arr[i-n];
        }

        SegTree seg;
        seg.build(1,1,2*n);
        
        
        for(int i=1;i<=n;i++){
            int l=-1;
            int r=n;
            while (r-l>1)
            {
                int mid=(l+r)/2;
                // int f=0;
                int val=arr[i]+(mid*k);
                if(seg.query(1,1,2*n,i+1,i+mid)<val){
                    r=mid;
                }
                else l=mid;
            }
            cout<<i<<" "<<r<<endl;
            // cout<<((i+r)%(n+1))+1;
            // if((i+r)%n==0) cout<<n;
            // else cout<<(i+r)%n;
            // if(i==n) cout<<endl;
            // else cout<<" ";
        }
    }
// }

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
