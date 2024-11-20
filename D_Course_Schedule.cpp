#include<bits/stdc++.h>
using namespace std;
vector<int>v[100000+9];
int vis[100000+9];
vector<int>anss;
bool dfs(int node){
   
    vis[node]=1; 
    for(auto child: v[node]){
        if(vis[child]==1){
            return true;
        }
        else if(vis[child]==0){
            if(dfs(child)==true) return true;
        }
            
    }

    vis[node]=2;
    anss.push_back(node);
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
    for(int i=1;i<=n;i++){
        if(vis[i]==0){
            ans = dfs(i);
          if(ans==true)
            break;
        }
          
    }
    if(ans==true)
        cout<<"IMPOSSIBLE"<<endl;
    else 
        {
            reverse(anss.begin(),anss.end());
            for(auto i: anss){
                cout<<i<<" ";
            }
            cout<<endl;
        }
}