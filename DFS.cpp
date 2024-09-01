#include<bits/stdc++.h>
using namespace std;
#define MAX 10000
vector<int> edges[MAX];
bool visited[MAX];
vector<int> ans; 

void dfs(int node){
    visited[node]=true;
    // cout<<node<<" ";
    ans.push_back(node); 
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
    // for(int i=1;i<=6;i++){
    //     if(!visited[i]){
    //         dfs(i);
    //     }
    // }
    for (int i : ans)  
    {  
        cout << i << " ";  
    }  
    cout << endl;  
    return 0;
}