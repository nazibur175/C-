#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             100000007
#define test int t; cin>>t; while(t--)
void solve(){
    int t;
    cin>>t;
    for(int tt=1;tt<=t;tt++){
        int n,k;
        cin>>n>>k;
        int val[n+1];
        for(int i=1;i<=n;i++){
            cin>>val[i];
        }
        int cnt[n+1];
        for(int i=1;i<=n;i++){
            cin>>cnt[i];
        }
        int dp[n+1][k+1];
        memset(dp,0,sizeof(dp));
        dp[0][0]=1;
        for(int i=1;i<=n;i++){
            for(int kk=0;kk<=k;kk++){
                for(int j=0;j<=cnt[i];j++){
                    if((kk-j*val[i])>=0){
                        dp[i][kk]+=dp[i-1][kk-j*val[i]];
                        dp[i][kk]%=mod;
                    }
                }
            }
        }
        cout<<"Case "<<tt<<": ";
        cout<<dp[n][k]<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}