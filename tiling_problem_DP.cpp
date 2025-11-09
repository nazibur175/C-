#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int N=1e6;
int dp[N];
int cal(int n){
    if(n==1) return 1;
    if(n==2) return 2;
    if(dp[n]!=-1) return dp[n];
    else return dp[n]=cal(n-1)+cal(n-2);
}
void solve(){
    int n;
    cin>>n;
    memset(dp,-1,sizeof(dp));
    int ans = cal(n);
    cout<<ans<<endl;

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}