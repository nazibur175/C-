#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)

bool is_valid(int m, int val){
    return val>=1 && val<=m;
}

void solve(){
int n,m;
cin>>n>>m;
int a[n+1];
for(int i=1;i<=n;i++) cin>>a[i];

int dp[n+1][m+1]={0};
memset(dp,0,sizeof(dp));
for(int i=1;i<=m;i++){
    if( a[1]==i || a[1]==0  ){
        dp[1][i]=1;
    }
}
 for(int i=2;i<=n;i++){
    for(int k=1;k<=m;k++){
        if(a[i]!=0 && a[i]!=k){
            dp[i][k]=0;
            continue;
        }

        for(int prev=k-1;prev<=k+1;prev++){
            if(!is_valid(m,prev)){
                continue;
            }
            dp[i][k]= (dp[i][k]+ dp[i-1][prev])%mod;
        }
    }
 }
 int ans=0;
 for(int i=1;i<=m;i++){
    ans= (ans + dp[n][i])%mod;
 }

    cout<<ans<<endl;
}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}