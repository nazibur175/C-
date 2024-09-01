#include<bits/stdc++.h>
using namespace std;
#define MAX 1000000
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
    int c=0;
    vector<pair<int,int>>ans;
    for(int i=1;i<=n;i++){
        if(!visited[i]){
            dfs(i);
            ans.push_back({i,i-1});
            c++;
        }
    }
    cout<<c<<endl;
    for (auto i : ans)  
    {  
        cout << i.first << " "<<i.second<<endl; 
    }  
    return 0;
}