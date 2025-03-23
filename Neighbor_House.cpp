#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    int t;
    cin>>t;
    for(int tt=1;tt<=t;tt++){
        int n;
        cin>>n;
        vector<int>v[n+1];
        for(int i=0;i<n;i++){
            int x,y,z;
            cin>>x>>y>>z;
            v[i].push_back(x);
            v[i].push_back(y);
            v[i].push_back(z);
        }
        int dp[n+1][3];
        dp[0][0]=v[0][0];
        dp[0][1]=v[0][1];
        dp[0][2]=v[0][2];
        for(int i=1;i<n;i++){
            dp[i][0]=v[i][0]+min(dp[i-1][1],dp[i-1][2]);
            dp[i][1]=v[i][1]+min(dp[i-1][0],dp[i-1][2]);
            dp[i][2]=v[i][2]+min(dp[i-1][0],dp[i-1][1]);
        }
        cout<<"Case "<<tt<<": ";
        cout<<min(dp[n-1][0],min(dp[n-1][1],dp[n-1][2]))<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}