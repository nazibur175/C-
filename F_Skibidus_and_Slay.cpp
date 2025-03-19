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
        int a[n+1];
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        int ans[n+1]={0};
        for(int i=0;i<n-1;i++){
            int u,v;
            cin>>u>>v;
            if(a[u]==a[v]){
                ans[a[u]]=1;
            }
            edge[u].push_back(v);
            edge[v].push_back(u);
        }
        for(int i=1;i<=n;i++){
            map<int,int>mp;
            for(auto x:edge[i]){
                mp[a[x]]++;
            }
            for(auto x:mp){
                if(x.second>1){
                    ans[x.first]=1;
                }
            }
        }
        for(int i=1;i<=n;i++){
            cout<<ans[i];
        }
        cout<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}