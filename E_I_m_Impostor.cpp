#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
// int mod = 1e9 + 7;
const int N = 1e6 + 9;
int f[N], inv[N], finv[N];
void prec() {
  f[0] = 1;
  for (int i = 1; i < N; i++){
    f[i] = 1LL * i * f[i - 1] % mod;
  } 
  inv[1] = 1;
  for(int i = 2; i < N; i++ ){
    inv[i] = (-(1LL * mod / i) * inv[mod % i] ) % mod;
    inv[i] = (inv[i] + mod) % mod;
  }
  finv[0] = 1;
  for (int i = 1; i < N; i++){
    finv[i] = 1LL * inv[i] * finv[i - 1] % mod;
  }
}
int ncr(int n, int r) {
  if (n < r || n < 0 || r < 0) return 0;
  return 1LL * f[n] * finv[n - r] % mod * finv[r] % mod;
}
int npr(int n,int r){
  if(n<r || n<0 || r<0) return 0;
  return ((f[n]*finv[n-r]%mod));
}

void solve(){
    prec();
    test{
        int n,m;
        cin>>n>>m;
        // nCm * (n-m)Cm 
        int ans = 0;
        for(int i=0;i<m;i++){
            // i= dead
            ans+=ncr(n-m,m-i)*ncr(m,i);
            ans%=mod;
        }
        ans*=ncr(n,m);
        ans%=mod;
        cout<<ans<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}