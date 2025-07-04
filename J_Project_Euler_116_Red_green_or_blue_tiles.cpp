#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
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
int cal_red(int n){
    if(n==1) return 1;
    else if(n==2) return 2;
    
    Mat a(2,2);
    a.a = {{1, 1}, {1, 0}};
    Mat b(2, 1);
    b.a = {{2}, {1}};
    a=a.pow(n-2);
    Mat res=a*b;
    return res.a[0][0];
}

int cal_green(int n){
    if(n==1) return 1;
    else if(n==2) return 1;
    else if(n==3) return 2;
    Mat a(3,3);
    a.a ={{1,0,1},{1,0,0},{0,1,0}};
    Mat b(3,1);
    b.a = {{2}, {1}, {1}};
    a=a.pow(n-3);
    Mat res=a*b;
    return res.a[0][0];
}
int cal_blue(int n){
    if(n==1) return 1;
    else if(n==2) return 1;
    else if(n==3) return 1;
    else if(n==4) return 2;
    Mat a(4,4);
    a.a = {{1,0,0,1},{1,0,0,0},{0,1,0,0},{0,0,1,0}};
    Mat b(4,1);
    b.a = {{2}, {1}, {1}, {1}};
    a=a.pow(n-4);
    Mat res=a*b;
    return res.a[0][0];
}
void solve(){
    test{
        int n;
        cin>>n;
        // cout<<n<<endl;
        //cout<<cal_red(n)<<endl;
        //cout<<cal_green(n)<<endl;
        //cout<<cal_blue(n)<<endl;
        int ans=(cal_red(n) + cal_green(n) + cal_blue(n) - 3) % mod;
        cout<<ans<<"\n";
    }
  }
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();
}

// Template from YouKnowWho