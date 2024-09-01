#include<bits/stdc++.h>
using namespace std;
vector<int>v[1000000];
int vis[1000000];
int dis[1000000];

void BFS(int node){
    queue<int>q;
    q.push(node);
    vis[node]=1;
    dis[node]=0;
    while(!q.empty())
    {
        int f=q.front();
        q.pop();
        for(int child: v[f]){
            if(vis[child]==0){
                q.push(child);
                vis[child]=1;
                dis[child]=dis[f]+1;
            }
        }
    }
}
int main(){
    int n,e;
    cin>>n>>e;
    while(e--){
        int x,y;
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }

        BFS(1);
        for(int i=1;i<=n;i++){
            cout<<"Distance of node "<<i<<"= "<<dis[i]<<endl;
        }
}
