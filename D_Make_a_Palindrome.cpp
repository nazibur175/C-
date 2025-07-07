#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
#define test int t; cin >> t; while (t--)

struct Fenwick {
    int n;
    vector<int> bit;
    Fenwick(int _n) : n(_n), bit(n + 2, 0) {}
    
    void update(int i, int delta) {
        while (i <= n) {
            bit[i] += delta;
            i += i & -i;
        }
    }
    
    int query(int i) const {
        int res = 0;
        while (i > 0) {
            res += bit[i];
            i -= i & -i;
        }
        return res;
    }

    // Counts how many elements are < x (compressed)
    int countLess(int x) const {
        return query(x - 1);
    }
};

void solve() {
    test {
        int n, k;
        cin >> n >> k;
        vector<int> a(n + 1);
        set<int> all_values;

        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            //all_values.insert(a[i]);
        }

        // Coordinate compression
        //map<int, int> compress;
        //int id = 1;
        //for (int v : all_values) compress[v] = id++;

        Fenwick fw(n+2);
        for (int i = 1; i <= n; i++) fw.update(a[i], 1);

        int L = 1, R = n;
        bool ok = true;
        while (L < R) {
            if (a[L] == a[R]) {
                //fw.update(compress[a[L]], -1);
                //fw.update(compress[a[R]], -1);
                L++;
                R--;
                continue;
            }

            // count of elements < a[L]+1
            int lcount = fw.countLess(a[L] + 1); 
            int rcount = fw.countLess(a[R] + 1);

            bool lpos = lcount >= k;
            bool rpos = rcount >= k;

            if (lpos && rpos) {
                if (a[L] > a[R]) {
                    fw.update(a[L], -1);
                    L++;
                } else {
                    fw.update(a[R], -1);
                    R--;
                }
            } else if (lpos) {
                fw.update(a[L], -1);
                L++;
            } else if (rpos) {
                fw.update(a[R], -1);
                R--;
            } else {
                ok = false;
                break;
            }
        }
        cout << (ok ? "YES\n" : "NO\n");
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
