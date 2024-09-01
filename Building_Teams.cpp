#include<bits/stdc++.h>
using namespace std;
bool vis[1000000],col[1000000];
vector<int>edge[1000000];

bool dfs(int node,int clr){
    vis[node]=true;
    col[node]=clr;
    for(int child : edge[node]){
        if(!vis[child]){
            if(dfs(child,clr^1)==false) return false;
        }
        else 
            {
                if(col[node]==col[child])return false;
            }
    }
    return true;
}
int main(){
    int n,e;
    cin>>n>>e;
    
    while(e--){
        int x,y;
        cin>>x>>y;
        edge[x].push_back(y);
        edge[y].push_back(x);
    }
    bool no=0;
    for(int i=1;i<=n;i++){
        if(!vis[i]){
            no=dfs(i,1);
            if(no==0) break;
        }
    }
    if(no==0)
        cout<<"IMPOSSIBLE"<<endl;
    else 
        {
            for(int i=1;i<=n;i++){
                cout<<col[i]+1<<" ";
            }
            cout<<endl;
        }
}
