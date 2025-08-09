#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             127657753
#define test int t; cin>>t; while(t--)

int bigmod(int a, int b) {
    int res = 1;
    while (b > 0) {
        if (b % 2 == 1) {
            res = (res * a) % mod;
        }
        a = (a * a) % mod;
        b /= 2;
    }
    return res;
}
int dp[1000000+9];
void solve(){
    memset(dp,-1,sizeof(dp));
    dp[0]=2;
    dp[1]=3;
    dp[2]=5;
    for(int i=3;i<=1000000;i++){
        int x=dp[i-1]*dp[i-2];
        x%=mod;
        int y=dp[i-3];
        y%=mod;
        y=bigmod(y,mod-2);
        dp[i]=x*y - dp[i-2];
        dp[i]%=mod;
        if(dp[i]<0) dp[i]+=mod;
        dp[i]%=mod;
    }
    test{
        int n;
        cin>>n;
        cout<<dp[n]<<"\n";
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}