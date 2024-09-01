#include<bits/stdc++.h>
using namespace std;
vector<int>v[100000];
int subsize[100000];
bool visited[100000];
int dfs(int node){
    visited[node]=1;
    int c=1;
    for(auto child: v[node]){
        if(visited[child]==0){
            c+=dfs(child);
        }
    }
    subsize[node]=c;
    return c;
}
int main(){
    int n,e;
    cin>>n;
    e=n-1;
    while(e--){
        int x,y;
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    dfs(1);
    for(int i=1;i<=n;i++){
        cout<<i<<" "<<subsize[i]<<endl;
    }
}
