#include<bits/stdc++.h>
using namespace std;
vector<int>v[100000];
bool vis[10000];
bool dfs(int node,int par){
    vis[node]=1; 
    for(auto child: v[node]){
        if(vis[child]==1){
            if(child!=par) return true;
        }
        else {
            if(dfs(child,node)==true) return true;
        }
            
    }
    return false;
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
    bool ans = dfs(1,-1);
    if(ans==true)
        cout<<"Cycle"<<endl;
    else 
        cout<<"No Cycle"<<endl;
}
