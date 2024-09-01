#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int x = 1;
        int y = 2;
        int z = n - 3;

        if (z % 3 == 0) {
            y += 2;
            z -= 2;
        }

        set<int> se;
        se.insert(x);
        se.insert(y);
        se.insert(z);

        if (x * y * z > 0 && x + y + z == n && se.size() == 3) {
            cout << "YES" << endl;
            cout << x << " " << y << " " << z << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
