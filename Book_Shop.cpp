#include <bits/stdc++.h>
using namespace std;
 
#define int long long
#define mod 1000000007
#define test int t; cin >> t; while (t--)
const int N = 1e5 + 9;
int price[1000 + 9];
int pages[1000 + 9];
int n, x;
int dp[N];
 
int knapsack() {
    memset(dp, 0, sizeof(dp));
    for (int i = 0; i < n; ++i) {
        for (int j = x; j >= price[i]; --j) {
            dp[j] = max(dp[j], dp[j - price[i]] + pages[i]);
        }
    }
    return dp[x];
}
 
void solve() {
    cin >> n >> x;
    for (int i = 0; i < n; i++) {
        cin >> price[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> pages[i];
    }
    cout << knapsack() << endl;
}
 
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}