#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)

const int N=1e6+9;
int c[N];
void precalc() {
  c[0] = c[1] = 0;
  for (int i = 2; i < N; ++i) {
    c[i] = c[i - 1];
    int x = i;
    while (x % 2 == 0) {
      x /= 2, c[i]++;
    }
  }
}

void solve() {
    precalc();
    test{
        int n, k;
        cin >> n >> k;
        n=n-1;
        for (int i = 0; i <= n; i++) {
            cout<<k*(c[n]-c[i]-c[n-i]==0)<<" ";
        }
        cout<<endl;
    }
}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}