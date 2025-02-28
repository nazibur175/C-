#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             998244353
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        int a[n+1]={0};
        for(int i=1;i<=n;i++)cin>>a[i];
        int dp[n+1]={0};
        dp[0]=1;

        for(int i=1;i<=n;i++){
            if(a[i]==a[i-1]) dp[i]= (dp[i] + dp[i-1])%mod;
            if(i>1 && a[i]==a[i-2]+1) dp[i]=(dp[i] + dp[i-2])%mod;
        }
        cout<<(dp[n]+dp[n-1])%mod<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}