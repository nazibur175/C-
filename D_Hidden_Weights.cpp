#include<bits/stdc++.h>
using namespace std;
#define int long long
#define   mod             1000000007
#define test int t; cin>>t; while(t--)

const int N = 200005;
const int INF = 1e18;

vector<pair<int,int>>adj[N];
vector<int>x(N,INF); 
vector<bool>vis(N,0);

void bfs(int init) {
    queue<int>q;
    q.push(init);
    x[init]=0; 
    vis[init] = true;

    while (!q.empty()) {
        int u = q.front();
        q.pop();

        for (auto [v, w] : adj[u]) {
            if (x[v] == INF) {
                x[v] = x[u] + w;
                q.push(v);
                vis[v] = true;
            }
        }
    }
}
void solve(){
    int n,m;
    cin>>n>>m;
   for(int i=0;i<m;i++) {
        int u, v;
        int w;
        cin >> u >> v >> w;
        adj[u].emplace_back(v, w);
        adj[v].emplace_back(u, -w); 
    }

    for(int i=1;i<=n;i++) {
        if (!vis[i]) {
            bfs(i);
        }
    }

    for(int i=1;i<=n;i++) {
        cout << x[i] ;
        if(i!=n) cout<<" ";
    }
    cout << endl;


}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}