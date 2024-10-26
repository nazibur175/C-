#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int N=2e5+5;
#define lf (nd<<1)
#define rt (lf|1)
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
int n;
int check(int mid,int x){
    int i=mid;
    int mx_dis=0;
    for(int j=1;j+i-1<=n;j++){
        int dis = query(1,0,n-1,j-1,j+i-2,j);
        if(dis==x) return 1;
    }
    return 0;
}
 
void solve(){
    
    cin>>n;
    string s;
    cin>>s;
    vector<int>vv(n);
    for(int i=0;i<n;i++){
        vv[i]=s[i]-'a'+1;
    }

    map<int,int>m;
    for(int i=0;i<n;i++){  
       v[i]=m[vv[i]];
       m[vv[i]]=i+1;
    }
    
    build(1,0,n-1);
    //map<int,int>mp;
    // for(int i=1;i<=n;i++){
    //     int mx_dis=0;
    //     for(int j=1;j+i-1<=n;j++){
    //         int dis = query(1,0,n-1,j-1,j+i-2,j);
    //         mx_dis = max(mx_dis,dis);
    //     }
    //     if(mp[mx_dis]==0)
    //         mp[mx_dis]=i;
    // }
    map<int,int>mp;
    for(int i=1;i<=26;i++){
        int l=1;
        int r=n+1;
        while(r-l>1){
            int mid = (l+r)/2;
            if(check(mid,i)){
                r=mid;
            }
            else{
                l=mid;
            }
        }
        if(r<=n)
            mp[i]=r;
    }

    int q;
    cin>>q;
    while(q--){
        int l,r;
        cin>>l>>r;
        int temp = query(1,0,n-1,l-1,r-1,l);
        cout<<mp[temp]<<"\n";
    }
    
}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();
 
}