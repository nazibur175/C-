/*Last observation is, as the dp stores only true or false as in only 1 or 0, 
we can store it in a bitset and perform our transitions using some left shifts.
 Check out the implementation to learn more. As bitset performs every operation 
 32 or 64 times faster */

#include<bits/stdc++.h>
using namespace std;

const int N = 125, M = 5005;
bitset<M> dp[2][M];
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t, cs = 0; cin >> t;
  while (t--) {
    int n; cin >> n;
    for (int i = 0; i < M; i++) {
      dp[0][i].reset(); dp[1][i].reset();
    }
    dp[0][0][0] = 1;
    cout << "Case " << ++cs << ":\n";
    int s = 0;
    for (int i = 1; i <= n; i++) {
      int x; cin >> x;
      int cur = i & 1, prv = (i - 1) & 1;
      for (int k = 0; k < M; k++) {
        dp[cur][k] = dp[prv][k];
        if (k >= x) {
          dp[cur][k] |= dp[prv][k - x];
        }
        dp[cur][k] |= dp[prv][k] << x;
      }
      s += x;
      if (s % 3 == 0 and dp[cur][s / 3][s / 3]) {
        cout << 1 << '\n';
      }
      else {
        cout << 0 << '\n';
      }
    }
  }
  return 0;
}