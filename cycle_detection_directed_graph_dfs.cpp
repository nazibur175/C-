#include<bits/stdc++.h>
using namespace std;
vector<int>v[100000];
int vis[100000];
bool dfs(int node){
    vis[node]=1; 
    for(auto child: v[node]){
        if(vis[child]==1){
            return true;
        }
        else {
            if(dfs(child)==true) return true;
        }
            
    }
    vis[node]=2;
    return false;
}
int main(){
    int n,e;
    cin>>n>>e;
    while(e--){
        int x,y;
        cin>>x>>y;
        v[x].push_back(y);
    }
   bool ans;
    for(int i=1;i<n;i++){
        if(vis[i]==0){
            ans = dfs(1);
          if(ans==true)
            break;
        }
          
    }
    if(ans==true)
        cout<<"YES"<<endl;
    else 
        cout<<"NO"<<endl;
}