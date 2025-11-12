// O(N log N)
#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 2e5 + 5;

int arr[N];

// Pair: {value, index}
pair<int,int> tree[4*N];

struct SegTree {
    #define lf (root << 1)
    #define rt ((root << 1) | 1)

    SegTree() {}

    inline pair<int,int> milao(pair<int,int> x, pair<int,int> y) {
        // return min value & index
        return (x.first <= y.first) ? x : y;
    }

    inline void prop(int root) {
        tree[root] = milao(tree[lf], tree[rt]);
    }

    void build(int root, int lo, int hi) {
        if (lo == hi) {
            tree[root] = {arr[lo], lo};
            return;
        }
        int mid = (lo + hi) >> 1;
        build(lf, lo, mid);
        build(rt, mid + 1, hi);
        prop(root);
    }

    void update(int root, int lo, int hi, int idx, int val) {
        if (lo == hi) {
            tree[root] = {val, lo};
            return;
        }
        int mid = (lo + hi) >> 1;
        if (idx <= mid)
            update(lf, lo, mid, idx, val);
        else
            update(rt, mid + 1, hi, idx, val);
        prop(root);
    }

    pair<int,int> query(int root, int lo, int hi, int i, int j) {
        if (j < lo || hi < i) return {LLONG_MAX, -1};
        if (i <= lo && hi <= j) return tree[root];
        int mid = (lo + hi) >> 1;
        return milao(query(lf, lo, mid, i, j), query(rt, mid + 1, hi, i, j));
    }
} seg;

int getMaxRect(int l, int r, int n) {
    if (l > r) return 0;
    auto minPair = seg.query(1, 1, n, l, r); // {minValue, minIndex}
    int minHeight = minPair.first;
    int minIdx = minPair.second;
    int areaWithMin = minHeight * (r - l + 1);
    int left = getMaxRect(l, minIdx - 1, n);
    int right = getMaxRect(minIdx + 1, r, n);
    return max({areaWithMin, left, right});
}

void solve() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> arr[i];
    seg.build(1, 1, n);
    // Compute maximum area rectangle in the histogram
    cout << getMaxRect(1, n, n) << "\n";
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
