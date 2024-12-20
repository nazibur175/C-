#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int N=1e6;
int dp[N];
int a[N];
int n;
int minimum(int pos){
    if(pos==n){
        return 0;
    }
    auto &ans=dp[pos];
    if(~ans) return ans;
    if(pos+1<=n)
        ans= minimum(pos+1) + abs(a[pos]-a[pos+1]);
    if(pos+2<=n)
        ans= min(ans,minimum(pos+2) + abs(a[pos]-a[pos+2]));
    return ans;
    
}
void solve(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    memset(dp,-1,sizeof(dp));
    // cout<<minimum(1)<<endl;
    minimum(1);
    cout<<dp[1]<<endl;

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}