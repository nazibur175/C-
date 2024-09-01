#include<bits/stdc++.h>
using namespace std;
#define MAX 200009
vector<int> edges[MAX];
bool visited[MAX];
vector<int> ans; 

void dfs(int node){
    visited[node]=true;
    // cout<<node<<" ";
    ans.push_back(edges[node].size()); 
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
    //dfs(1);
    int result=0;
    for(int i=1;i<=n;i++){
        if(!visited[i]){
            dfs(i);
            int f=1;
            for(auto x:ans){
                if(x!=2){
                    f=0;
                }
            }
            ans.clear();
            result+=f;
        }
    }
    cout<<result<<endl;
    return 0;
}