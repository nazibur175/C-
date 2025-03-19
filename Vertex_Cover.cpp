#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
int dp[100001][2];
vector<int>adj[100001];
void dfs(int node,int par){
    dp[node][0]=0;
    dp[node][1]=1;
    for(auto child:adj[node]){
        if(child==par) continue;
        dfs(child,node);
        dp[node][0]+=dp[child][1];
        dp[node][1]+=min(dp[child][0],dp[child][1]);
    }

}
void solve(){
    int n;
    cin>>n;
    for(int i=0;i<n-1;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs(1,-1);
    cout<<min(dp[1][0],dp[1][1])<<endl;

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}