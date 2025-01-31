#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int N = 200005;
vector<int>tree[N];
int level[N];
int vis[N];

void dfs(int node,int lv){
    vis[node]=1;
    level[node]=lv;
    for(auto child:tree[node]){
        if(!vis[child]){
            dfs(child,lv+1);
        }

    }
    //return;
}

void solve(){
    test{

        int n;
        cin>>n;
        
        for (int i = 1; i <= n+2; i++) {
            tree[i].clear();
            level[i]=0;
            vis[i]=0;
        }
        for(int i=0;i<n-1;i++){
            int u,v;
            cin>>u>>v;
            tree[u].push_back(v);
            tree[v].push_back(u);
        }
        if(n==2){
            cout<<0<<endl;
            continue;
        }
       int root=0;
       for(int i=1;i<=n;i++){
        if(tree[i].size()==1) root=i;
       }
       dfs(root,0);


        map<int,int>m;
        int mx=0;
        int node=0;
        
        for(int i=1;i<=n;i++){ 
            m[i]=tree[i].size();
            if(m[i]>mx){
                mx=m[i];
                node=i;
            }
        }
        int ans=0;
        for(auto x:m){
            if(mx==x.second && level[x.first]>=level[node]){
                node=x.first;
            }
        }
        //cout<<node<<endl;
        ans+=m[node];
        for(auto x:tree[node]){
            m[x]--;
            level[x]--;
        }
        m.erase(node);
        mx=-5;
        for(auto x:m){
            mx=max(mx,x.second-1);
        }
        //cout<<mx<<endl;

        node=0;
        level[node]=-2;
        for(auto x:m){
            if(mx==x.second-1 && level[x.first]>=level[node]){
                node=x.first;
            }
        }
        //cout<<node<<endl;
        ans+=m[node]-1;
        cout<<ans<<endl;
        
        
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}