#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int q;
        cin >> q;

        vector<int> lastOccurrence(32, -1);

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < 32; j++) {
                if ((a[i] >> j) & 1) {
                    lastOccurrence[j] = i;
                }
            }
        }

        for (int i = 0; i < q; i++) {
            int l, k;
            cin >> l >> k;
            l--; // Convert 1-based index to 0-based index

            int r = l;

            for (int j = 31; j >= 0; j--) {
                if (((k >> j) & 1) && lastOccurrence[j] >= l) {
                    r = max(r, lastOccurrence[j]);
                }
            }

            if (r >= l) {
                cout << r + 1 << endl; // Convert back to 1-based index
            } else {
                cout << -1 << endl;
            }
        }
    }

    return 0;
}
