#include <bits/stdc++.h>
using namespace std;
#define inf 1<<30  
#define int long long int
int n, numEdges,l,s,t;
const int N=2e3;
vector<int>path(N);
map<pair<int,int>,int>m;
vector<pair<int,int>>eg;
int total_zero_cnt=0;
int shortest_zero_cnt=0;
int need=0;
vector<int>shortest_path;
void dijstkra(int n, vector<int>edge[], vector<int>cost[], int s,int t){
    int distance[n+1];
    for(int i=1;i<=n;i++) {
        distance[i] = inf;
    }
    path[s]=-1;
    priority_queue<pair<int,int>>q;
    q.push({s,0});
    distance[s] = 0;
    
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
                path[v]=curent;
            }
        }
    }
    //cout<<distance[t]<<endl;
    need=distance[t];
    shortest_path.push_back(t);
    while (path[t]!=-1)
    {
        shortest_path.push_back(path[t]);
        t=path[t];
    }
    reverse(shortest_path.begin(),shortest_path.end());
    //for(auto x:shortest_path) cout<<x<<" ";
    //cout<<endl;
 
 



    
}
int32_t main(){
 
    vector<int>edge[10000], cost[10000]; 
    //this code can handle maximum 10000 nodes

    cin>>n>>numEdges>>l>>s>>t;
    for(int i=0;i<numEdges;i++){
        int u, v, w;
        cin>>u>>v>>w;
        m[{u,v}]=w;
        m[{v,u}]=w;
        if(w==0) total_zero_cnt++;
        eg.push_back({u,v});
        edge[u].push_back(v);
        edge[v].push_back(u);
        cost[u].push_back(w);
        cost[v].push_back(w);
    }
    
    dijstkra(n, edge, cost, s,t);

    for(int i=0;i<shortest_path.size()-1;i++){
        if(m[{shortest_path[i],shortest_path[i+1]}]==0) shortest_zero_cnt++;
    }
     //cout<<need<<endl;
     //cout<<total_zero_cnt<<endl;
     //cout<<shortest_zero_cnt<<endl;
    //for(auto x:shortest_path) cout<<x<<" ";
    //cout<<endl;
    if(total_zero_cnt>l-need) cout<<"NO"<<endl;
    else if(shortest_zero_cnt==0 && l-need) cout<<"NO"<<endl;
    else {
        cout<<"YES"<<endl;
        int extra = l-need;
        cout<<extra<<endl;
        for(int i=0;i<shortest_path.size()-1;i++){
        if(m[{shortest_path[i],shortest_path[i+1]}]==0){
            if(shortest_zero_cnt==1){
                m[{shortest_path[i],shortest_path[i+1]}]=extra;
                shortest_zero_cnt--;
            }
            else {
                m[{shortest_path[i],shortest_path[i+1]}]=1;
                extra--;
                shortest_zero_cnt--;
            }
        }
        
    }
    for(auto x:eg){
            cout<<x.first<<" "<<x.second<<" ";
            if(m[{x.first,x.second}]==0) cout<<50<<endl;
            else cout<<m[{x.first,x.second}]<<endl;
        }
    }
    return 0;
}