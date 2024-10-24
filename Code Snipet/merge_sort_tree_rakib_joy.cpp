#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int N=4e5+5;
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
int query(int nd,int l,int r,int ql,int qr,int x,int y){
    if(l>qr || r<ql) return 0;
    if(l>=ql && r<=qr){
        return upper_bound(tree[nd].begin(),tree[nd].end(),y)-lower_bound(tree[nd].begin(),tree[nd].end(),x);
    }
    int mid=(l+r)>>1;
    return query(lf,l,mid,ql,qr,x,y)+query(rt,mid+1,r,ql,qr,x,y);
}
void solve(){
    test{
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        build(1,0,n-1);
        int q;
        cin>>q;
        while(q--){
            int l,r,x,y;
            cin>>l>>r>>x>>y;
            cout<<query(1,0,n-1,l-1,r-1,x,y)<<endl;
        }
    }
}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}