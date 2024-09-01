#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
int dp[1000][1000];
int ncr(int n,int r){
    if(dp[n][r]!=-1) return dp[n][r];
    if(n==r) return 1;
    if(r==1) return n;
    return dp[n][r] = (ncr(n-1,r-1) + ncr(n-1,r));
}
void solve(){
    int n,r;
    memset(dp,-1,sizeof(dp));
    while (cin>>n>>r)
    {
        if(n==0 && r==0 ) break;
        cout<<n<<" things taken "<<r<<" at a time is "<<ncr(n,r)<<" exactly."<<endl;
    }
    
}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}