#include<bits/stdc++.h>
using namespace std;
const int N = 2e6 + 9, mod = 1e9 + 7;
#define int long long int
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
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  int pre=0;
  int res=1;
  for(int i=0;i<n;i++){
    res*=ncr(pre+a[i]-1,a[i]-1)%mod;
    res=res%mod;
    pre+=a[i];
  }
  cout<<res<<endl;
  return 0;
}
