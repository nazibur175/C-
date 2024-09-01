#include<bits/stdc++.h>
using namespace std;
#define MAX 200000+9
vector<int> edges[MAX];
bool visited[MAX];
void dfs(int node){
    visited[node]=true; 
    for(auto it: edges[node]){
        if(!visited[it]){
            dfs(it);
        }
    }
}
int main(){

    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        edges[x].push_back(y);
        //edges[y].push_back(x);
    } 
    dfs(1);
    if(visited[n]) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}