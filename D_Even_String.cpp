#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             998244353
#define test int t; cin>>t; while(t--)
const int N=5e5+5;
int dp[27][N];
int f[N], inv[N], finv[N];
void prec() {
  f[0] = 1;
  for (int i = 1; i < N; i++) f[i] = 1LL * i * f[i - 1] % mod;
  inv[1] = 1;
  for (int i = 2; i < N; i++ ) {
    inv[i] = (-(1LL * mod / i) * inv[mod % i] ) % mod;
    inv[i] = (inv[i] + mod) % mod;
  }
  finv[0] = 1;
  for (int i = 1; i < N; i++) finv[i] = 1LL * inv[i] * finv[i - 1] % mod;
}
void solve(){
    prec();
    test{
        int n=27;
        int a[n];
        int cnt=0;
        for(int i=1;i<=26;i++){
            cin>>a[i];
            cnt+=a[i];
        }
        int od_pos=(cnt+1)/2;
        int ev_pos=cnt/2;
        //memset(dp,0,sizeof(dp));
        for(int i=0;i<=26;i++){
            for(int j=0;j<=ev_pos;j++){
                dp[i][j]=0;
            }
        }

        dp[0][0]=1;
        for(int i=1;i<=26;i++){
            for(int j=0;j<=ev_pos;j++){
                if((j-a[i])>=0 && a[i]>0){
                    dp[i][j]=(dp[i-1][j] + dp[i-1][j-a[i]])%mod;
                }
                else{
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
        int ans=dp[26][ev_pos];
        ans=(ans*f[ev_pos])%mod;
        ans=(ans*f[od_pos])%mod;
        for(int i=1;i<=26;i++){
            ans=(ans*finv[a[i]])%mod;
        }
        cout<<ans<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}