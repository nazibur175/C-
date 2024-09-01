#include <bits/stdc++.h>
using namespace std;
#define inf 1e14;
#define int long long int
const int N=6e3;
vector<int>edge[N],cost[N],dist[N];
struct ComparePairs {
    bool operator()(const pair<int, int>& p1, const pair<int, int>& p2) const {
        return p1.second > p2.second; 
    }
};
void dijstkra(int n){
     priority_queue<pair<int, int>, vector<pair<int, int>>, ComparePairs> q;
    q.push({1,0});
    while(!q.empty()){
        auto to = q.top();
        q.pop();
        auto [curent,weight]=to;

        if(dist[curent].size()==0){

            dist[curent].push_back(weight);
        } 
        else if(dist[curent].size()==1) {
            if(dist[curent][0]==weight ){
                continue;
            }
                
            dist[curent].push_back(weight);
        }
        else {
            continue;
        }

        for(int i=0;i<edge[curent].size();i++){
            int v=edge[curent][i];
            q.push({v, (weight+cost[curent][i])});
        }
    }

    cout<<dist[n][1]<<endl;

}
int32_t main(){
   int t;
   cin>>t;
   for(int tt=1;tt<=t;tt++){
    for(int i=0;i<N;i++){
        edge[i].clear();
        cost[i].clear();
        dist[i].clear();
    }
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
    cout<<"Case "<<tt<<": ";
    dijstkra(numNodes);
    }
}