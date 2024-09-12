#include<bits/stdc++.h>
using namespace std;
const int N = 1e6 + 9, mod = 1e9 + 7;
#define int long long int
#define test int t; cin>>t; while(t--)
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
int ncr(int n, int r) {
  if (n < r || n < 0 || r < 0) return 0;
  return 1LL * f[n] * finv[n - r] % mod * finv[r] % mod;
}


int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  prec();
  test{
    int n,k;
    cin>>n>>k;
    int cnt0=0;
    int cnt1=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x) cnt1++;
        else cnt0++;
    }
    int lagbe = (k+1)/2;
    int ans=0;
    for(int i=lagbe;i<=k;i++){
        if((k-i)<=cnt0){
            ans= (ans+ ((ncr(cnt1,i)%mod)*(ncr(cnt0,k-i)%mod))%mod)%mod;
        }
    }
    cout<<ans<<endl;
  }
    //cout<<ncr(n,r)<<endl;
  
  return 0;
}
