#include<bits/stdc++.h>
using namespace std;
const int N = 1e7 + 9, mod = 1e9 + 7;
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


    int bar,star;
    cin>>bar>>star;
    int n=star+bar-1;
    int r=bar-1;

    cout<<ncr(n,r)<<endl;
  
  return 0;
}