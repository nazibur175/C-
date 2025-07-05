#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int N=2e5+5;
vector<int>even,odd;
vector<int>adj[N];
vector<int>ans(N,-1);
const int inf=1e18;
void bfs(vector<int>&start, vector<int>&end){
    queue<int>q;
    vector<int>dis(N,inf);
    for(auto x:start){
        q.push(x);
        dis[x]=0;
    }
    while(!q.empty()){
        int node=q.front();
        q.pop();
        for(auto child:adj[node]){
            if(dis[child]==inf){
                dis[child]=dis[node]+1;
                q.push(child);
            }
        }
    }
    for(auto x:end){
        if(dis[x]!=inf){
            ans[x]=dis[x];
        }
    }
}
void solve(){
    int n;
    cin>>n;
    vector<int>a(n+1);
    for(int i=1;i<=n;i++){
        cin>>a[i];
        if(a[i]%2==0){
            even.push_back(i);
        }
        else {
            odd.push_back(i);
        }
    }
    for(int i=1;i<=n;i++){
        int lf=i-a[i];
        int rg=i+a[i];
        if(1ll<=lf){
            adj[lf].push_back(i);
        }
        if(rg<=n){
            adj[rg].push_back(i);
        }
    }
    bfs(even, odd);
    bfs(odd, even);
    for(int i=1;i<=n;i++){
        cout<<ans[i];
        if(i<n) cout<<" ";
        
    }
    cout<<"\n";

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}