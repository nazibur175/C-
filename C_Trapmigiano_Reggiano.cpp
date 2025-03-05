#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,st,en;
        cin>>n>>st>>en;
        vector<int>edge[n+1];
        for(int i=0;i<n-1;i++){
            int u,v;
            cin>>u>>v;
            edge[u].push_back(v);
            edge[v].push_back(u);
        }

        int dist[n+1]={0};
        int vis[n+1]={0};
        queue<int>q;
        q.push(en);
        vector<pair<int,int>>temp;
        while (q.size()){
            int cur = q.front();
            q.pop();
            vis[cur]=1;
            for(auto x:edge[cur]){
                if(!vis[x]){
                    dist[x]=dist[cur]+1;
                    q.push(x);
                }
            }
        }
        for(int i=1;i<=n;i++){
            if(dist[i]>0){
                temp.push_back({dist[i],i});
            }
        }
        sort(temp.rbegin(),temp.rend());
        for(auto x:temp){
            cout<<x.second<<" ";
        }
        cout<<en<<endl; 
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}