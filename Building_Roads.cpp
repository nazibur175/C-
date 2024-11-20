#include<bits/stdc++.h>
using namespace std;
#define MAX 1000000
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
        edges[y].push_back(x);
    } 
    dfs(1);
    vector<int>ans;
    ans.push_back(1);
    for(int i=1;i<=n;i++){
        if(!visited[i]){
            ans.push_back(i);
            dfs(i);
        }
    }
    cout<<ans.size()-1<<endl;
    for(int i=1;i<ans.size();i++){
        cout<<ans[i-1]<<" "<<ans[i]<<endl;
    }
}