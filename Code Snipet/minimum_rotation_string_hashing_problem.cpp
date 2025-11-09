#include<bits/stdc++.h>
using namespace std;

const int N = 2e6 + 9;

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
int n,nn;
string s;
 int is_less(int start1,int start2, Hashing &h){
     int l=0;
     int r=n+1;

     while (r-l>1)
     {
         int mid=(l+r)/2;
         if(h.get_hash(start1,start1+mid-1)==h.get_hash(start2,start2+mid-1)){
             l=mid;
         }
        else r=mid;
     }
     //cout<<l<<endl;
     int in1 = start1-1+l-1+1;
     int in2 = start2-1+l-1+1;
     if(in1<nn && in2<nn ){
         return s[in1]<s[in2];
     }
     else return 0;
    
 }
void solve(){
    prec();
    cin>>s;
    n=s.size();

    s=s+s;
    nn=s.size();
    Hashing h(s);
    
    int in=1;
    // 1 based
    for(int i=2;i<=n;i++){
        if(is_less(i,in,h)){
            in=i;
        }
    }

    string ans;

    for(int i=0;i<n;i++){
        ans.push_back(s[in-1]);
        in++;
    }
    cout<<ans<<endl;

}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  solve();
  return 0;
}
// https://www.spoj.com/problems/NHAY/
// Template from https://github.com/ShahjalalShohag/code-library/blob/main/Graph%20Theory/LCA.cpp