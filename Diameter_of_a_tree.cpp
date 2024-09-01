#include<bits/stdc++.h>
using namespace std;
#define MAX 100000
vector<int>edges[MAX];
vector<int>ans;
bool visited[MAX];
int dis[MAX];
void dfs(int node,int d){
    visited[node]=true;
    dis[node]=d;
    for(auto it: edges[node]){
        if(!visited[it]){
            dfs(it,d+1);
        }
    }
}
int main(){
     int n,m;
     cin>>n;
     m=n-1;
     while(m--){
        int x,y;
        cin>>x>>y;
        edges[x].push_back(y);
        edges[y].push_back(x);
     }
    dfs(1,0);
    int nn,maxdis=0;
    for(int i=1;i<=n;i++){
        if(dis[i]>=maxdis)
        {
             maxdis=dis[i];
             nn=i;
        }
    }
    memset(visited,0,sizeof(visited));
    memset(dis,0,sizeof(dis));
    dfs(nn,0);
    maxdis=0;
    for(int i=1;i<=n;i++){
        if(dis[i]>=maxdis)
        {
             maxdis=dis[i];
            //  nn=i;
        }
    }
  cout<<maxdis<<endl;  
    
}