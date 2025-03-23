#include<bits/stdc++.h>
using namespace std;
#define int long long
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
string a,b,c;
int dp[60][60][60];
void solve(){
    int t;
    cin>>t;
    for(int tt=1;tt<=t;tt++){
        cin>>a>>b>>c;
        int n=a.size(),nn=b.size(),nnn=c.size();
        memset(dp,0,sizeof dp);
        for(int i=1;i<=n;i++){
            for(int j=1;j<=nn;j++){
                for(int k=1;k<=nnn;k++){
                    if(a[i-1]==b[j-1] && b[j-1]==c[k-1]){
                        dp[i][j][k]=1+dp[i-1][j-1][k-1];
                    }
                    else{
                        dp[i][j][k]=max({dp[i-1][j][k],dp[i][j-1][k],dp[i][j][k-1]});
                    }
                }
            }
        }
        cout<<"Case "<<tt<<": "<<dp[n][nn][nnn]<<endl;
    }
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}