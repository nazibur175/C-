#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int inf = 1e18; 
int dijstkra(int n,int a[], vector<int>edge[], vector<int>cost[], int source){
    int distance[n+1];
    for(int i=1;i<=n;i++) {
        distance[i] = inf;
    }
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>>q;
    q.push({0,source});
    distance[source] = 0;

    while(!q.empty()){
        auto top = q.top();
        q.pop();
        auto[weight, curent] = top;
        if(weight > distance[curent]) continue;
        for(int i=0;i<(int)edge[curent].size();i++){
            int v=edge[curent][i];
            //Relaxation
            if(distance[curent] + cost[curent][i] < distance[v]){
                distance[v] = distance[curent] + cost[curent][i];
                q.push({distance[v], v});
            }
        }
    }
    // for(int i=1;i<=n;i++){
    //     cout<<source<<" --> "<<i<<" = "<<distance[i]<<endl;
    // }
    distance[0]=0;
    for(int i=1;i<=n;i++){
        distance[i]=min(distance[i-1]+a[i], distance[i]);
    }
    return distance[n];
}
void solve(){
    test{
        int n;
        cin>>n;
        int a[n+1];
        int sum=0;
        for(int i=1;i<=n;i++) cin>>a[i], sum+=a[i];
        int b[n+1];
        for(int i=1;i<=n;i++) cin>>b[i];
        vector<int>edge[n+5], cost[n+5];
        for(int i=1;i<=n;i++){
            edge[i].push_back(b[i]);
            cost[i].push_back(a[i]);
            if(i>1){
                edge[i].push_back(i-1);
                cost[i].push_back(0);
            }
        }
        int temp = dijstkra(n,a, edge, cost, 1);
        cout<<sum-temp<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}