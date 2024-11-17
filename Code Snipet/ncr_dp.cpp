#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
int fact[109];
int dp[109][109];
int ncr(int n,int r){
    if(n==0 || r==0 || n==r){
        return 1;
    }
    if(dp[n][r]!=-1){
        return dp[n][r];
    }
    return dp[n][r]=ncr(n-1,r)+ncr(n-1,r-1);
}
void solve(){
    fact[0]=1;
    for(int i=1;i<=19;i++){
    fact[i]=fact[i-1]*i;
    }
    memset(dp,-1,sizeof dp);
    int ncrr = ncr(n,k);
    cout<<ncrr<<endl;

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}