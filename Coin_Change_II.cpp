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
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int dp[k+1];
        memset(dp,0,sizeof(dp));
        dp[0]=1;
        for(int i=0;i<n;i++){
            for(int kk=0;kk<=k;kk++){
                if((kk-a[i])>=0){
                    dp[kk]+=dp[kk-a[i]];
                    dp[kk]%=mod;
                }
            }
        }
        cout<<"Case "<<tt<<": ";
        cout<<dp[k]<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}