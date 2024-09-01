#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
vector<int>v[1000000];
long long int result=0;
bool vis[1000000];
void dfs(int node){
    vis[node]=1;
    result++;
    for(auto child: v[node]){
        if(vis[child]==0){
            dfs(child);
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        for(int i=0;i<100000;i++)
            v[i].clear();
        memset(vis,0,sizeof(vis));
        int n,m;
        cin>>n>>m;
        while(m--){
            int x,y;
            cin>>x>>y;
            v[x].push_back(y);
            v[y].push_back(x);
        }
      
        long long int comp=0;
        long long int ans=1;
        for(int i=1;i<=n;i++){
            result=0;
            if(vis[i]==0){
                comp++;
                dfs(i);
                ans=(ans*result)%mod;
            }
        }
        cout<<comp<<" "<<ans<<endl;
    }
}