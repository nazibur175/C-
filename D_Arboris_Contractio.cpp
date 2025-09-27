#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        vector<int>edge[n+1];
        for(int i=0;i<n-1;i++){
            int u,v;
            cin>>u>>v;
            edge[u].push_back(v);
            edge[v].push_back(u);
        }
        int leaf[n+1]={0};
        int total=0;
        for(int i=1;i<=n;i++){
            if(edge[i].size()==1) leaf[i]=1 , total++;
        }
        int ans=INT64_MAX;
        for(int i=1;i<=n;i++){
            int cnt=0;
            if(leaf[i]) cnt++;
            for(auto it:edge[i]){
                if(leaf[it]) cnt++;
            }
            ans=min(ans,total-cnt);
        }
        cout<<ans<<"\n";
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}