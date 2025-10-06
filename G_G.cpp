#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int N=1e5+9;
vector<int>edges[N+2];
int timer=1;
int tin[N+1];
int low[N+1];
int vis[N+1];
int ans;
int n,m;
int dfs(int node,int par=-1){
    vis[node]=1;
    tin[node]=low[node]=timer++;
    int c=1;
    for(auto ch:edges[node]){
        if(ch!=par){
            if(vis[ch]){
                low[node]=min(low[node],tin[ch]);
            }
            else {
                int cnt=dfs(ch,node);
                low[node]=min(low[node],low[ch]);
                if(low[ch]>tin[node]){
                    ans=min(ans, cnt*(cnt-1)/2 + (n-cnt)*(n-cnt-1)/2);
                }
                c+=cnt;
            }
        }
    }
    return c;
}
void solve(){
    test{
        // int n,m;
        cin>>n>>m;
        for(int i=1;i<=n+5;i++){
            edges[i].clear();
            vis[i]=0;
            tin[i]=0;
            low[i]=0;
            timer=1;
        }
        for(int i=1;i<=m;i++){
            int x,y;
            cin>>x>>y;
            edges[x].push_back(y);
            edges[y].push_back(x);
        }
        ans=n*(n-1)/2;
        int temp=dfs(1);
        cout<<ans<<endl;

    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}