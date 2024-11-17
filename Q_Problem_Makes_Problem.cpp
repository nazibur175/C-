#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define test int t; cin>>t; while(t--)

const int N = 2e6 + 9, mod = 1e9 + 7;
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

void solve(){
    prec();
    int t;
    cin>>t;
    for(int tt=1;tt<=t;tt++){
        int x,y;
        cin>>x>>y;
        cout<<"Case "<<tt<<": ";
        cout<<ncr(x+y-1,y-1)<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}