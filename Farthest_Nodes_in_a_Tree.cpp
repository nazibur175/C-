#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int N=3e4+5;
vector<pair<int,int>>adj[N+1];
int maxD,maxNode;
void dfs(int node,int par,int d){
    if(d>maxD){
        maxD=d;
        maxNode=node;
    }
    for(auto it:adj[node]){
        if(it.first!=par){
            dfs(it.first,node,d+it.second);
        }
    }
}
void solve(){
    int t;
    cin>>t;
    for(int tt=1;tt<=t;tt++){
        int n;
        cin>>n;
        for(int i=0;i<n-1;i++){
            int u,v,w;
            cin>>u>>v>>w;
            adj[u].push_back({v,w});
            adj[v].push_back({u,w});
        }
        maxD=-1;
        dfs(0,-1,0);
        maxD=-1;
        dfs(maxNode,-1,0);
        cout<<"Case "<<tt<<": "<<maxD<<endl;
        for(int i=0;i<=n;i++){
            adj[i].clear();
        }

    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}