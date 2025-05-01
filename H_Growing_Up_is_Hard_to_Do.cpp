#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007

const int Ma = 300009;
int a[Ma];
pair<int, int> tree[4 * Ma];

pair<int, int> query(int root, int b, int e, int i, int j) {
    if (i > e || j < b) return {0, 0};
    if (b >= i && e <= j) return tree[root];
    int mid = (b + e) / 2;
    pair<int, int> p1 = query(2 * root, b, mid, i, j);
    pair<int, int> p2 = query(2 * root + 1, mid + 1, e, i, j);

    if (p1.first == p2.first)
        return {p1.first, (p1.second + p2.second) % mod};
    else if (p1.first > p2.first)
        return p1;
    else
        return p2;
}

void update(int root, int b, int e, int i, pair<int, int> newval) {
    if (i > e || i < b) return;
    if (b == e) {
        tree[root].first = newval.first;
        tree[root].second = newval.second % mod;
        return;
    }
    int mid = (b + e) / 2;
    update(2 * root, b, mid, i, newval);
    update(2 * root + 1, mid + 1, e, i, newval);

    if (tree[2 * root].first == tree[2 * root + 1].first) {
        tree[root].first = tree[2 * root].first;
        tree[root].second = (tree[2 * root].second + tree[2 * root + 1].second) % mod;
    } else if (tree[2 * root].first > tree[2 * root + 1].first) {
        tree[root] = tree[2 * root];
    } else {
        tree[root] = tree[2 * root + 1];
    }
}

void solve() {
    int n;
    cin >> n;
    vector<int> aa(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> aa[i];
    }

    vector<int> d = aa;
    sort(d.begin() + 1, d.end());
    d.erase(unique(d.begin() + 1, d.end()), d.end());

    int sz = d.size(); 
    for (int i = 1; i <= n; i++) {
        aa[i] = lower_bound(d.begin() + 1, d.end(), aa[i]) - d.begin();
        a[i] = aa[i];
    }

    for (int i = n; i >= 1; i--) {
        int L = a[i];
        pair<int, int> temp = query(1, 1, sz, L + 1, sz);
        update(1, 1, sz, L, {temp.first + 1, temp.second == 0 ? 1 : temp.second});
    }

    int ans = query(1, 1, sz, 1, sz).second % mod;
    cout << ans << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
