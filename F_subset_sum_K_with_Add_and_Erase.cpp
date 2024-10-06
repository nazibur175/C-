#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             998244353
#define test int t; cin>>t; while(t--)
void solve(){
    int n,k;
    cin>>n>>k;
    int dp[6000]={0};
    dp[0]=1;
    while (n--)
    {
        string s;
        int x;
        cin>>s>>x;
        if(s=="+"){
            for(int i=k;i>=x;i--){
                dp[i]+=dp[i-x];
                dp[i]%=mod;
            }
        }
        else{
            for(int i=x;i<=k;i++){
                dp[i]-=dp[i-x];
                if(dp[i]<0) dp[i]+=mod;
            }

        }
        cout<<dp[k]<<endl;
    }
    

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}