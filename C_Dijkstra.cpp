#include <bits/stdc++.h>
using namespace std;
#define inf 1e14;
#define int long long int
const int N=5e5;
map<int,int>path;
vector<int>edge[N], cost[N];
int dis[N+9];
void dijstkra(int n, vector<int>edge[], vector<int>cost[], int source){
    priority_queue<pair<int,int>>q;
    q.push({source,0});
    dis[source] = 0;
    //path[n]=-1;
    //path[1]=-1;
    while(!q.empty()){
        auto top = q.top();
        q.pop();
        auto [curent,weight]=top;
        for(int i=0;i<(int)edge[curent].size();i++){
            int v=edge[curent][i];
            //Relaxation
            if(dis[curent] + cost[curent][i] < dis[v]){
                dis[v] = dis[curent] + cost[curent][i];
                q.push({v, dis[v]});
                path[v]=curent;
            }
        }
    }
    if(path[n]==0) cout<<-1<<endl;
    else
    {vector<int>v;
    v.push_back(n);
    while (path[n])
    {
        v.push_back(path[n]);
        n=path[n];
    }
    reverse(v.begin(),v.end());
    for(auto x:v) cout<<x<<" ";
    cout<<endl;}
}
int32_t main(){
    int numNodes, numEdges;
    cin>>numNodes>>numEdges;
     for(int i=1;i<=N;i++) {
        dis[i] = inf;
    }
    for(int i=0;i<numEdges;i++){
        int u, v, w;
        cin>>u>>v>>w;
        edge[u].push_back(v);
        edge[v].push_back(u);
        cost[u].push_back(w);
        cost[v].push_back(w);
    }
    dijstkra(numNodes, edge, cost, 1);
    return 0;
}