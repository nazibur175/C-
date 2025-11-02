#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    if (!(cin >> T)) return 0;
    while (T--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int a = 0, c = 0; // a = count of '0', c = count of '2'
        for (char ch : s) {
            if (ch == '0') ++a;
            else if (ch == '2') ++c;
        }
        int lowT = a;
        int highT = a + c;
        int remainShift = n - k; // used in inequality
        int Lmax = a + c + 1;
        int Rmin = n - k + a;
        bool hasAlwaysRemainRegion = (Lmax <= Rmin);

        string ans;
        ans.reserve(n);
        for (int i = 1; i <= n; ++i) {
            // check if exists some t in [lowT, highT] with t+1 <= i <= n-k+t
            int leftNeeded = max(lowT, i - remainShift);
            int rightNeeded = min(highT, i - 1);
            bool exists = (leftNeeded <= rightNeeded);

            if (!exists) {
                // cannot be present in ANY scenario => removed
                ans.push_back('-');
            } else if (hasAlwaysRemainRegion && i >= Lmax && i <= Rmin) {
                // present for ALL scenarios => definitely remains
                ans.push_back('+');
            } else {
                // present in some scenarios but not all => unknown
                ans.push_back('?');
            }
        }

        cout << ans << '\n';
    }
    return 0;
}
