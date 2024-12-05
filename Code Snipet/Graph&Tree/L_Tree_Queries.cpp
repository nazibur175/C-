#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
vector<int>edge[200001];
int parent[200001];
int level[200001];
int intime[200001];
int outtime[200001];
void dfs(int node,int par,int lev,int &timer){
    parent[node]=par;
    level[node]=lev;
    intime[node]=timer++;
    for(auto x:edge[node]){
        if(x!=par){
            dfs(x,node,lev+1,timer);
        }
    }
    outtime[node]=timer++;
}
void solve(){
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n-1;i++){
        int x,y;
        cin>>x>>y;
        edge[x].push_back(y);
        edge[y].push_back(x);
    }
    int timer=1;
    dfs(1,1,0,timer);
    while(m--){
        int k;
        cin>>k;
        vector<int>nodes(k);
        vector<pair<int,int>>v; 
        for(int i=0;i<k;i++){
            int x;
            cin>>x;
            nodes[i]=parent[x];
            v.push_back({level[x],nodes[i]});
        }
        sort(v.begin(),v.end());
        bool flag=true;
        for(int i=1;i<k;i++){
            if(intime[v[i].second]<intime[v[i-1].second] || outtime[v[i].second]>outtime[v[i-1].second]){
                flag=false;
                break;
            }
        }
        if(flag){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
        
    }


}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}