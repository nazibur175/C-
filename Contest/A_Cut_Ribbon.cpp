#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    int n,a,b,c;
    cin>>n>>a>>b>>c;
    int dp[n+4009]={0};
    dp[a]=1;
    dp[b]=1;
    dp[c]=1;
    for(int i=1;i<=n;i++){
        if(dp[i]){
        dp[i+a]=max(dp[i+a],dp[i]+1);
        dp[i+b]=max(dp[i+b],dp[i]+1);
        dp[i+c]=max(dp[i+c],dp[i]+1);
        }
    }
    cout<<dp[n]<<endl;

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}