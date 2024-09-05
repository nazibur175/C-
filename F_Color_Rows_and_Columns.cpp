#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,k;
        cin>>n>>k;
        int a[n+1],b[n+1];
        for(int i=1;i<=n;i++) {
            cin>>a[i]>>b[i];
        }
        int dp[1000+9][100+9];
        for(int i=0;i<=n+1;i++){
            for(int j=0;j<=k+5;j++){
                dp[i][j]=mod;
            }
        }

         dp[0][0]=0;

        for(int i=1;i<=n;i++){
            int x=a[i];
            int y=b[i];
            // cur = jj
            // will be =jj + ii
            int xy=x+y;
            int cost = 0;
            for(int ii=0;ii<=xy;ii++){
                for(int jj=0;jj+ii<=k+5;jj++){
                    dp[i][jj+ii]= min(dp[i][jj+ii],dp[i-1][jj]+cost);
                }
                if(x && y){
                    if(x>=y){
                        x--;
                        cost+=y;
                    }
                    else {
                        y--;
                        cost+=x;
                    }
                }
            }
        }
        if(dp[n][k]==mod){
            cout<<"-1"<<endl;
            continue;
        }
        cout<<dp[n][k]<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}