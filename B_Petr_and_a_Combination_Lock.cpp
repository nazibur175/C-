#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
int solve(){
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int t = 0; t < (1 << n); t++) {
    int x = 0;
    for (int i = 0; i < n; i++) {
      if (t & (1 << i)) x += a[i];
      else x -= a[i];
    }
    if (x % 360 == 0){
        cout<<"YES"<<endl;
        return 0;
    }
  }
  cout << "NO" << '\n';
  return 0;
}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}