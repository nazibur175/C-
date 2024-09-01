#include<bits/stdc++.h>
using namespace std;
bool vis[100000],col[100000];
vector<int>edge[100000];

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
    bool no=dfs(1,1);
    if(no)
        cout<<"NO"<<endl;
    else 
        cout<<"YES"<<endl;
}
