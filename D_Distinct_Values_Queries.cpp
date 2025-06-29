#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int N=2e5+5;
#define lf (nd<<1)
#define rt ((nd<<1)|1)
int v[N];
vector<int>tree[4*N];
void build(int nd,int l,int r){
    if(l==r){
        tree[nd].push_back(v[l]);
        return;
    }
    int mid=(l+r)>>1;
    build(lf,l,mid);
    build(rt,mid+1,r);
    tree[nd].resize(r-l+1);
    merge(tree[lf].begin(),tree[lf].end(),tree[rt].begin(),tree[rt].end(),tree[nd].begin());
}
int query(int nd,int l,int r,int ql,int qr,int x){
    if(l>qr || r<ql) return 0;
    if(l>=ql && r<=qr){
        return lower_bound(tree[nd].begin(),tree[nd].end(),x)-tree[nd].begin();
    }
    int mid=(l+r)>>1;
    return query(lf,l,mid,ql,qr,x)+query(rt,mid+1,r,ql,qr,x);
}
void solve(){
        int n,q;
        cin>>n>>q;
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        map<int,int>m;
        for(int i=0;i<n;i++){
            int temp=v[i];
            if(m[temp]==0){
                v[i]=0;
            }
            else{
                v[i]=m[temp];
            }
            m[temp]=i+1;
        }
        build(1,0,n-1);
        while(q--){
            int l,r;
            cin>>l>>r;
            cout<<query(1,0,n-1,l-1,r-1,l)<<"\n";
        }
    }

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}
