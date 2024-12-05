#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int N=1e5+5;
set<int>node;
set<int>adj[N+1];
int vis[N+1];
int n,m;
void dfs(int u){
    if(vis[u])return;
    node.erase(u);
    vis[u]=1;
    int x=0;
    if(adj[u].size()==0){
        auto it=node.lower_bound(x+1);
        if(it!=node.end()){
            int val=*it;
            dfs(val);
        }
        return;
    }
    for(auto y:adj[u]){
        while(1){
        auto it=node.lower_bound(x);
        if(it==node.end())break;
        int val=*it;
        if(val>=y){
            x=y+1;
            break;
        }
        dfs(val);
        }
    }
    
    x=*(adj[u].rbegin());
    while(1){
        auto it=node.lower_bound(x+1);
        if(it==node.end())break;
        int val=*it;
        dfs(val);
    }
    
}
void solve(){
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[u].insert(v);
        adj[v].insert(u);
    }
    for(int i=1;i<=n;i++){
        node.insert(i);
    }
    int cnt=0;
    for(int i=1;i<=n;i++){
        if(vis[i]==0){
            cnt++;
            dfs(i);
        }
        if(adj[i].size()==0){
            cnt=1;
            break;
        }

    }
    cout<<cnt-1<<endl;
    //cout<<cnt<<endl;
    
}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}