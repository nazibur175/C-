#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        vector<int>edge[n+5];
        vector<int>cost(n+5,0);
        for(int i=0;i<n-1;i++){
            int u,v;
            cin>>u>>v;
            edge[u].push_back(v);
            edge[v].push_back(u);
        }
        int vis[n+5]={0};
        for(int i=1;i<=n;i++){
            cin>>cost[i];
        }
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>>pq;
        int cur=cost[1];
        for(auto x:edge[1]){
            pq.push({cost[x],x});
        }
        vis[1]=1;
        while(!pq.empty()){
            auto [c,u]=pq.top();
            pq.pop();
            if(vis[u]) continue;
            if(c>=cur) break;
            vis[u]=1;
            cur+=c/2;
            for(auto x:edge[u]){
                if(!vis[x]){
                    pq.push({cost[x],x});
                }
            }
        }
        int f=1;
        for(int i=1;i<=n;i++){
            if(!vis[i]){
                f=0;
                break;
            }
        }
        if(f) cout<<"YES\n";
        else cout<<"NO\n";
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}