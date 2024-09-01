#include <bits/stdc++.h>
using namespace std;
#define inf 1<<30  
void dijstkra(int n, vector<int>edge[], vector<int>cost[], int source){
    int distance[n+1];
    for(int i=1;i<=n;i++) {
        distance[i] = inf;
    }
    priority_queue<pair<int,int>>q;
    q.push({source,0});
    distance[source] = 0;
    
    while(!q.empty()){
        auto top = q.top();
        q.pop();
        auto [curent,weight]=top;
        
        for(int i=0;i<(int)edge[curent].size();i++){
            int v=edge[curent][i];

            //Relaxation
            if(distance[curent] + cost[curent][i] < distance[v]){
                distance[v] = distance[curent] + cost[curent][i];
                q.push({v, distance[v]});
            }
        }
    }
    for(int i=1;i<=n;i++){
        cout<<source<<" --> "<<i<<" = "<<distance[i]<<endl;
    }
}
int main(){
 
    vector<int>edge[10000], cost[10000]; 
    //this code can handle maximum 10000 nodes
    int numNodes, numEdges;
    cin>>numNodes>>numEdges;
    for(int i=0;i<numEdges;i++){
        int u, v, w;
        cin>>u>>v>>w;
        edge[u].push_back(v);
        edge[v].push_back(u);
        cost[u].push_back(w);
        cost[v].push_back(w);
    }
    //int source;
    //cin>>source;
    dijstkra(numNodes, edge, cost, 1);
    
    return 0;
}