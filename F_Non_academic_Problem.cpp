#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int N=1e5+10;
int n,m;
vector<int>adj[N];
vector<bool>visited;
vector<int> tin, low;
int timer=0;
int ans=0;
int dfs(int v, int p = -1) {

    visited[v] = true;
    tin[v] = low[v] = timer++;
    int c=1;
    for (int to : adj[v]) {
        if(to!=p){
        if (visited[to]) {
            low[v] = min(low[v], tin[to]);
        } else {
            int cnt = dfs(to, v);
            low[v] = min(low[v], low[to]);
            if (low[to] > tin[v])
                ans=min(ans, cnt*(cnt-1)/2 + (n-cnt)*(n-cnt-1)/2);

            c+=cnt;
            }
        }
    }
    return c;
}
void solve(){
    test{
        cin>>n>>m;
        for(int i=0;i<=n;i++) adj[i].clear();
        for(int i=0;i<m;i++){
            int x,y;
            cin>>x>>y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        timer = 0;
        visited.assign(n+1, false);
        tin.assign(n+1, -1);
        low.assign(n+1, -1);
        ans= (n*(n-1))/2;
        dfs(1);
        // for (int i = 0; i < n; ++i) {
        //     if (!visited[i])
        //     dfs(i);
        // }
        cout<<ans<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}