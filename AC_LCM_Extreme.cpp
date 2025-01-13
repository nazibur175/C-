#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e6 + 9;
using ull = unsigned long long;

// Modular inverse of an odd number modulo 2^64 using Newton-Raphson method
ull mod_inverse(ull a) {
    ull inv = 1;
    for (int i = 0; i < 63; i++) {
        inv = inv * (2 - a * inv); // Newton-Raphson method
    }
    return inv;
}

ull cnt[N];
ull final[N];

void solve() {
    int t;
    cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        int n;
        cin >> n;

        // Reset arrays
        for (int i = 0; i <= n; i++) {
            cnt[i] = 0;
            final[i] = 0;
        }

        for (int i = n; i >= 1; i--) {
            ull sum = i;
            ull sqsum = (ull)i * i;

            for (int j = 2 * i; j <= n; j += i) {
                sum += j;
                sqsum += (ull)j * j;
                final[i] -= final[j];
            }

            // Ensure wraparound for 2^64
            ull temp = ((sum * sum) - sqsum) / 2; 
            final[i] += temp;
        }

        ull ans = 0;
        for (int i = 1; i <= n; i++) {
            ull inv = mod_inverse(i); // Modular inverse of i
            ans += final[i] * inv;
        }

        cout << "Case " << tt << ": " << ans << endl;
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
