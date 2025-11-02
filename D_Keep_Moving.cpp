#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int N=1e5+9;
vector<int>edge[N];
// int c=0;
int dp[N];
int dfs(int node){
    // c++;
    // cout<<node<<endl;
    for(auto x:edge[node]){
        if(dp[x]==0){
            return 1;
        }
        if(dfs(x)%2==0){
            // c++;
            return dp[x]=1;
        }
    }
    
    return dp[node]=0;
}
void solve(){
   int t;
   cin>>t;
   for(int tc=1;tc<=t;tc++){
        
        int n,m,x;
        cin>>n>>m>>x;
        for(int i=0;i<=n;i++){
            dp[i]=-1;
        }
        for(int i=0;i<=n;i++) edge[i].clear();
        for(int i=0;i<m;i++){
            int x,y;
            cin>>x>>y;
            edge[x].push_back(y);
        }
        int ans=dfs(x);
        cout<<"Case "<<tc<<": ";
        if(ans) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
        // cout<<c<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}