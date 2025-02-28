#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,s,e;
        cin>>n>>s>>e;
        vector<int>adj[n+1];
        for(int i=0;i<n-1;i++){
            int u,v;
            cin>>u>>v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        vector<int>par(n+1,-1);
        int vis[n+1]={0};
        queue<int>q;
        q.push(s);
        vis[s]=1;
        while(q.size()){
            int p=q.front();
            q.pop();
            if(p==e) break;
            for(auto x:adj[p]){
                if(vis[x]==0){
                    vis[x]=1;
                    par[x]=p;
                    q.push(x);
                    
                }
            }
        }

        vector<int>path;
        int x=e;
        while(x!=-1){
            path.push_back(x);
            x=par[x];
        }
        reverse(path.begin(),path.end());
        int aa[n+1]={0};
        for(int i=0;i<path.size();i++){
            aa[path[i]]=1;
        }
        vector<int>ans;
        for(int i=1;i<=n;i++){
            if(aa[i]==0) ans.push_back(i);
        }
        for(auto x:path){
            ans.push_back(x);
        }
        if(ans.size()!=n || ans.back()!=e){
            cout<<"-1"<<endl;
            continue;
        }
        for(int i=0;i<ans.size();i++){
            cout<<ans[i];
            if(i!=ans.size()-1) cout<<" ";
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