#include<bits/stdc++.h>
using namespace std;
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    map<int, int> mp;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
      mp[a[i]]++;
    }
    sort(a.begin(), a.end());
    if (a[0] == a[n - 1]) {
      cout << 1LL * n * (n - 1) << endl;
    }
    else {
      cout << 1LL * mp[a[0]] * mp[a[n - 1]] * 2 << endl;
    }
  }
  return 0;
}