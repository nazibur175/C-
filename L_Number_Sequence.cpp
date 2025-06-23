#include<bits/stdc++.h>
using namespace std;
#define int long long 
int mod;
#define test int t; cin>>t; while(t--)
struct Mat {
  int n, m;
  vector<vector<int>> a;
  Mat() { }
  Mat(int _n, int _m) {n = _n; m = _m; a.assign(n, vector<int>(m, 0)); }
  Mat(vector< vector<int> > v) { n = v.size(); m = n ? v[0].size() : 0; a = v; }
  inline void make_unit() {
    assert(n == m);
    for (int i = 0; i < n; i++)  {
      for (int j = 0; j < n; j++) a[i][j] = i == j;
    }
  }
  inline Mat operator + (const Mat &b) {
    assert(n == b.n && m == b.m);
    Mat ans = Mat(n, m);
    for(int i = 0; i < n; i++) {
      for(int j = 0; j < m; j++) {
        ans.a[i][j] = (a[i][j] + b.a[i][j]) % mod;
      }
    }
    return ans;
  } 
  inline Mat operator - (const Mat &b) {
    assert(n == b.n && m == b.m);
    Mat ans = Mat(n, m);
    for(int i = 0; i < n; i++) {
      for(int j = 0; j < m; j++) {
        ans.a[i][j] = (a[i][j] - b.a[i][j] + mod) % mod;
      }
    }
    return ans;
  }
  inline Mat operator * (const Mat &b) {
    assert(m == b.n);
    Mat ans = Mat(n, b.m);
    for(int i = 0; i < n; i++) {
      for(int j = 0; j < b.m; j++) {
        for(int k = 0; k < m; k++) {
          ans.a[i][j] = (ans.a[i][j] + 1LL * a[i][k] * b.a[k][j] % mod) % mod;
        }
      }
    }
    return ans;
  }
  inline Mat pow(long long k) {
    assert(n == m);
    Mat ans(n, n), t = a; ans.make_unit();
    while (k) {
      if (k & 1) ans = ans * t;
      t = t * t;
      k >>= 1;
    }
    return ans;
  }
  inline Mat& operator += (const Mat& b) { return *this = (*this) + b; }
  inline Mat& operator -= (const Mat& b) { return *this = (*this) - b; }
  inline Mat& operator *= (const Mat& b) { return *this = (*this) * b; }
  inline bool operator == (const Mat& b) { return a == b.a; }
  inline bool operator != (const Mat& b) { return a != b.a; }
};
void solve(){
    int t;
    cin>>t;
    for(int tt=1;tt<=t;tt++)
    {
        int a,b,n,m;
        cin>>a>>b>>n>>m;
        mod=10;
        for(int i=1;i<m;i++){
            mod*=10;
        }
        if(n==0){
            cout<<a%mod<<endl;
            continue;
        }
        else if(n==1){
            cout<<b%mod<<endl;
            continue;
        }
        Mat ma(2,2);
        ma.a[0][0] = 1; ma.a[0][1] = 1;
        ma.a[1][0] = 1; ma.a[1][1] = 0;
        Mat mb(2,1);
        mb.a[0][0] = b; mb.a[1][0] = a;
        Mat ans = ma.pow(n-1) * mb;
        cout<<"Case "<<tt<<": ";
        cout<<ans.a[0][0]%mod<<endl;
    }
  }
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();
}

// Template from YouKnowWho