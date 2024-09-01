#include<bits/stdc++.h>
using namespace std;
vector<int>v[100000];
int vis[100000],in[100000],out[100000];
int t=1;
void dfs(int node){
    vis[node]=1; 
    in[node]=t++;
    for(auto child: v[node]){
            if(vis[child]==0)
                dfs(child);
        } 
    out[node]=t++;
}
int main(){
    int n,e;
    cin>>n>>e;
    while(e--){
        int x,y;
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    dfs(1);
    for(int i=1;i<=n;i++)
    {
        cout<<i<<" In time: "<<in[i]<<" Out time: "<<out[i]<<endl;
    }
    }
