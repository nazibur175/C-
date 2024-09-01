#include<bits/stdc++.h>
using namespace std;
#define MAX 100000
vector<int>edges[MAX];
int visited[MAX];
void dfs(int node,int d){
    visited[node]=d;
    for(int child: edges[node]){
        if(visited[child]!=d){
            dfs(child,d);
        }
    }
}
int main(){
    int t;
    cin>>t;
    for(int ii=1;ii<=t;ii++){
        int k,n,m;
        cin>>k>>n>>m;
        int a[k+1];
        for(int i=1;i<=k;i++)cin>>a[i];
        for(int i=0;i<=n;i++)edges[i].clear();
        memset(visited,0,sizeof(visited));
        while(m--){
        int x,y;
        cin>>x>>y;
        edges[x].push_back(y);
     }
    for(int i=1;i<=k;i++)
        dfs(a[i],i);
    
    int c=0;
    for(auto i=1;i<=n;i++){
        if(visited[i]==k)c++;
    }
    printf("Case %d: %d\n",ii,c);
    }
     
}