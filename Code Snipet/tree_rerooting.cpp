#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int N = 3e5;
vector<int>edge[N];
int sz[N],score[N];
void cal_sz(int u,int p){
    sz[u]=1;
    for(auto v: edge[u]){
        if(v==p) continue;
        cal_sz(v,u);
        sz[u]+=sz[v];
        score[u]+=score[v];
    }
    score[u]+=sz[u];
}
int ans =0;
void change_root(int u,int p){
    ans = max(ans, score[u]);
    for(auto v:edge[u]){
        if(v==p) continue;
        // store 
        int ua=score[u];
        int ub=sz[u];
        int va=score[v];
        int vb=sz[v];

        // Re root
        score[u]-=score[v];
        score[u]-=sz[u];
        sz[u]-=sz[v];
        score[u]+=sz[u];

        score[v]-=sz[v];
        sz[v]+=sz[u];
        score[v]+=sz[v];
        score[v]+=score[u];
        change_root(v,u);

        // Restore 
        score[u]=ua;
        sz[u]=ub;
        score[v]=va;
        sz[v]=vb;
    }
}
void solve(){
    int n;
    cin>>n;
    for(int i=0;i<n-1;i++){
        int x,y;
        cin>>x>>y;
        edge[x].push_back(y);
        edge[y].push_back(x);
    }
    cal_sz(1,0);
    change_root(1,0);
    cout<<ans<<endl;

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}