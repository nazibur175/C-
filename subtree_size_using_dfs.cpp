#include<bits/stdc++.h>
using namespace std;
#define   operation();    ios_base:: sync_with_stdio(0);cin.tie(0);cout.tie(0)
vector<int>v[1000000];
vector<int>subsize(1000000);
// int subsize[1000000];
bool visited[1000000];
int dfs(int node){
    visited[node]=1;
    int c=0;
     if(v[node].size()==1 && visited[v[node][0]]==1)
         c=1;
    for(auto child: v[node]){
            if(visited[child]==0){
                c+=dfs(child);
            }
        }
    subsize[node]=c;
    return c;
}
signed main(){
    operation();
    int t;
    cin>>t;
    while(t--){
    int n,e;
    cin>>n;
    for(int i=0;i<=n;i++)v[i].clear();
    subsize.clear();
    memset(visited,0,sizeof(visited));
    e=n-1;
    while(e--){
        int x,y;
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    dfs(1);
    int q;
    cin >> q;
    for (int i = 1; i <= q; i++) {
        int c, d;
        cin >> c >> d;
         long long int res =(long long int) subsize[c] * subsize[d];
        cout<<res<<endl;
        
    }
    }
}