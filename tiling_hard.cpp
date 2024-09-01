#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int N=1e6;
int dp[N];
int calc(int n){
    if(n==1) return 1;
    else if(n==2) return 3;
    if(dp[n]!=-1) return dp[N];
    return dp[n]=calc(n-1)+calc(n-2)+calc(n-3);
}
void solve(){
    int n;
    cin>>n;
    memset(dp,-1,sizeof(dp));
    int ans = calc(n);
    cout<<ans<<endl;

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}