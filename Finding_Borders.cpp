#include<bits/stdc++.h>
using namespace std;

const int N = 1e6 + 9;

// Big mod
int power(long long n, long long k, const int mod) {
  int ans = 1 % mod;
  n %= mod;
  if (n < 0) n += mod;
  while (k) {
    if (k & 1) ans = (long long) ans * n % mod;
    n = (long long) n * n % mod;
    k >>= 1;
  }
  return ans;
}

const int MOD1 = 127657753, MOD2 = 987654319;
const int p1 = 141, p2 = 277;
int ip1, ip2;
pair<int, int> pw[N], ipw[N];
// pre  calculation
void prec() {
  pw[0] =  {1, 1};
  for (int i = 1; i < N; i++) {
    pw[i].first = 1LL * pw[i - 1].first * p1 % MOD1;
    pw[i].second = 1LL * pw[i - 1].second * p2 % MOD2;
  }
  //inverse power
  ip1 = power(p1, MOD1 - 2, MOD1);
  ip2 = power(p2, MOD2 - 2, MOD2);
  ipw[0] =  {1, 1};
  for (int i = 1; i < N; i++) {
    ipw[i].first = 1LL * ipw[i - 1].first * ip1 % MOD1;
    ipw[i].second = 1LL * ipw[i - 1].second * ip2 % MOD2;
  }

}

// Call 
//Hashing H(str);
// H.get_hash(l,r); (string 1 based index)
struct Hashing {
  int n;
  string s; // 0 - indexed
  vector<pair<int, int>> hs; // 1 - indexed
  // Empty constructor
  Hashing() {}
  // Pass a string on constructor
  Hashing(string _s) {
    n = _s.size();
    s = _s;
    // 1 index korar jonno
    hs.emplace_back(0, 0);
    for (int i = 0; i < n; i++) {
      pair<int, int> p;
      p.first = (hs[i].first + 1LL * pw[i].first * s[i] % MOD1) % MOD1;
      p.second = (hs[i].second + 1LL * pw[i].second * s[i] % MOD2) % MOD2;
      hs.push_back(p);
    }
  }
  // get hash value of range l to r
  pair<int, int> get_hash(int l, int r) { // 1 - indexed
    assert(1 <= l && l <= r && r <= n);
    pair<int, int> ans;
    ans.first = (hs[r].first - hs[l - 1].first + MOD1) * 1LL * ipw[l - 1].first % MOD1;
    ans.second = (hs[r].second - hs[l - 1].second + MOD2) * 1LL * ipw[l - 1].second % MOD2;
    return ans;
  }
  pair<int, int> get_hash() {
    return get_hash(1, n);
  }
};
// 12 56=1256
pair<int,int>mer(pair<int,int>x, pair<int,int>y , int z){ // z- lenght of x
  pair<int,int>an;
  an.first = (x.first+(1ll * pw[z].first*y.first)%MOD1)%MOD1;
  an.second= (x.second+(1ll*pw[z].second*y.second)%MOD2)%MOD2;
  return an;
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  prec();
  string s;
  cin>>s;
  Hashing hs(s);
 
  int n=s.size();
  vector<int>ans;
  for(int i=0;i<n-1;i++){
    int l=1;
    int r=i+1;
    if(hs.get_hash(l,r)==hs.get_hash(n-r+1,n-l+1)){
        ans.push_back(i+1);
    }
  }
  for(auto x:ans) cout<<x<<" ";
  cout<<endl;
  return 0;
}
// https://www.spoj.com/problems/NHAY/
// Template from https://github.com/ShahjalalShohag/code-library/blob/main/Graph%20Theory/LCA.cpp