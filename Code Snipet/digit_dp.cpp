#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 20;
int dp[N][2][2][11];

int cal(const string &S, int pos, bool tight, bool lead, int last) {
    if (pos == S.size()) return 1;
    int &ans = dp[pos][tight][lead][last];
    if (ans != -1) return ans;
    ans = 0;

    int lim = tight ? (S[pos] - '0') : 9;
    for (int d = 0; d <= lim; d++) {
        if (!lead && d == last) continue; 
        bool new_tight = tight && (d == lim);
        bool new_lead = lead && (d == 0);
        int new_last = (new_lead ? 10 : d); 
        ans += cal(S, pos + 1, new_tight, new_lead, new_last);
    }

    return ans;
}

int count_no_adj_same(int x) {
    if (x < 0) return 0;
    string S = to_string(x);
    memset(dp, -1, sizeof(dp));
    return cal(S, 0, 1, 1, 10);
}
void solve(){
    int a, b;
    cin >> a >> b;
    int ans = count_no_adj_same(b) - count_no_adj_same(a - 1);
    cout << ans << "\n";
}
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}
