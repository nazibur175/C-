#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int N=2e5+9;
vector<int>edge[N];
int a[N];
int mx[N], mn[N];
void dfs(int nd, int par) {
    if (par==-1) {
        mx[nd]=a[nd];
        mn[nd]=a[nd];
    } 
    else{
        mx[nd]=max(a[nd],a[nd]-mn[par]);
        mn[nd]=min(a[nd],a[nd]-mx[par]);
    }
    for (int ch:edge[nd]){
        if(ch!=par){
            dfs(ch,nd);
        }
    }
}
void solve(){
    test{
        int n;
        cin>>n;
        for (int i=1; i<=n;i++) {
            cin>>a[i];
            edge[i].clear();
            mx[i]=0;
            mn[i]=0;
        }
        for (int i=0;i<n-1;i++){
            int x,y;
            cin>>x>>y;
            edge[x].push_back(y);
            edge[y].push_back(x);
        }
        
        dfs(1,-1);
        for (int i=1;i<=n;i++){
            cout<<mx[i];
            if(i!=n)cout<<" ";
        }
        cout<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}