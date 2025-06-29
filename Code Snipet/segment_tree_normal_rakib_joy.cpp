#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 2e5 + 5;

int arr[N];
int tree[4 * N];

struct SegTree {
    #define lf (root << 1)
    #define rt ((root << 1) | 1)

    SegTree() {}

    inline int milao(int x, int y) {
        return x + y;
    }

    inline void prop(int root) {
        tree[root] = milao(tree[lf], tree[rt]);
    }

    void build(int root, int lo, int hi) {
        if (lo == hi) {
            tree[root] = arr[lo];
            return;
        }
        int mid = (lo + hi) >> 1;
        build(lf, lo, mid);
        build(rt, mid + 1, hi);
        prop(root);
    }

    void update(int root, int lo, int hi, int idx, int val) {
        if (lo == hi) {
            tree[root] = val;
            return;
        }
        int mid = (lo + hi) >> 1;
        if (idx <= mid)
            update(lf, lo, mid, idx, val);
        else
            update(rt, mid + 1, hi, idx, val);
        prop(root);
    }

    int query(int root, int lo, int hi, int i, int j) {
        if (j < lo || hi < i) return 0;
        if (i <= lo && hi <= j) return tree[root];
        int mid = (lo + hi) >> 1;
        return milao(query(lf, lo, mid, i, j), query(rt, mid + 1, hi, i, j));
    }
};

void solve() {
    int n, q;
    cin >> n >> q;
    for (int i = 1; i <= n; i++) cin >> arr[i];
    SegTree seg;
    seg.build(1, 1, n);
    while (q--) {
        int l, r;
        cin >> l >> r;
        cout << seg.query(1, 1, n, l, r) << "\n";
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
