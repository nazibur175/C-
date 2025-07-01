#include<bits/stdc++.h>
using namespace std;
#define int long long 
int   mod =             1000000007;
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
    for(int tc=1;tc<=t;tc++){
        cout<<"Case "<<tc<<":\n";
        int a1,b1,c1;
        cin>>a1>>b1>>c1;
        int a2,b2,c2;
        cin>>a2>>b2>>c2;
        int f0,f1,f2;
        cin>>f0>>f1>>f2;
        int g0,g1,g2;
        cin>>g0>>g1>>g2;
        int m;
        cin>>m;
        mod=m;
        int q;
        cin>>q;
        Mat A(6,6);
        A.a={{a1,b1,0,0,0,c1},
             {1,0,0,0,0,0},
             {0,1,0,0,0,0},
             {0,0,c2,a2,b2,0},
             {0,0,0,1,0,0},
             {0,0,0,0,1,0}};
        Mat B(6,1);
        B.a={{f2},
             {f1},
             {f0},
             {g2},
             {g1},
             {g0}};
        while(q--){
            int n;
            cin>>n;
            if(n==0){
                cout<<f0%mod<<" "<<g0%mod<<endl;
            }
            else if(n==1){
                cout<<f1%mod<<" "<<g1%mod<<endl;
            }
            else if(n==2){
                cout<<f2%mod<<" "<<g2%mod<<endl;
            }
            else{
                Mat ans = A.pow(n-2) * B;
                cout<<ans.a[0][0]%mod<<" "<<ans.a[3][0]%mod<<endl;
            }
        }
    }
  }
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();
}

// Template from YouKnowWho