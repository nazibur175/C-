#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,m;
        cin>>n>>m;
        int a[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>a[i][j];
            }
        }
        vector<pair<int,int>>v;
        for(int i=0;i<n;i++){
            int sum=0;
            for(int j=0;j<m;j++){
                sum+=a[i][j];
            }
            v.push_back({sum,i});
        }
        sort(v.rbegin(),v.rend());
        vector<int>vv;
        for(auto x:v){
            int in=x.second;
            for(int i=0;i<m;i++){
                vv.push_back(a[in][i]);
            }
        }
        int ans=0;
        for(int i=0;i<n*m;i++){
            ans += vv[i]*(n*m-i);
        }
        cout<<ans<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}