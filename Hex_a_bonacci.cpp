#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             10000007
#define test int t; cin>>t; while(t--)
void solve(){
    int t;
    cin>>t;
    for(int tt=1;tt<=t;tt++){
        int a,b,c,d,e,f,n;
        cin>>a>>b>>c>>d>>e>>f>>n;
        int dp[n+9]={0};
        dp[0]=a%mod;
        dp[1]=b%mod;
        dp[2]=c%mod;
        dp[3]=d%mod;
        dp[4]=e%mod;
        dp[5]=f%mod;
        for(int i=6;i<=n;i++){
            dp[i]=(((((dp[i-1]+dp[i-2])%mod+dp[i-3])%mod+dp[i-4])%mod+dp[i-5])%mod+dp[i-6])%mod;
        }
        cout<<"Case "<<tt<<": ";
        cout<<dp[n]<<endl;
        
        
    }
}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}