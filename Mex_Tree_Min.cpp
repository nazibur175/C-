#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        vector<int>edges[n+1];
        for(int i=1;i<n;i++){
            int u,v;
            cin>>u>>v;
            edges[u].push_back(v);
            edges[v].push_back(u);
        }
        int ans=0;
        int leaf=0;
        for(int i=1;i<=n;i++){
            if(edges[i].size()==1){
                leaf++;
            }
        }
        if(leaf==2){
            ans=2*n-1;
        }
        else ans=2+n-1;
        cout<<ans<<"\n";
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}