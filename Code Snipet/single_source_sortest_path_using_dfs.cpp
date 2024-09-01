#include<bits/stdc++.h>
using namespace std;
#define MAX 10000
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
     cin>>n>>m;
     while(m--){
        int x,y;
        cin>>x>>y;
        edges[x].push_back(y);
        edges[y].push_back(x);
     }
    int x;
    cin>>x;
    dfs(x,0);
    for(auto i=1;i<=n;i++){
        cout<<x<<" " <<i<<"->"<<dis[i]<<endl;
    }
}
