#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 2e5 + 5;

int arr[N];

struct Node {
    int total, prefix, suffix, maxsum;
    Node(int v = 0) : total(v), prefix(v), suffix(v), maxsum(v) {}
};

Node tree[4 * N];

struct SegTree {
    #define lf (root << 1)
    #define rt ((root << 1) | 1)

    SegTree() {}

    inline Node merge(const Node &l, const Node &r) {
        Node res;
        res.total = l.total + r.total;
        res.prefix = max(l.prefix, l.total + r.prefix);
        res.suffix = max(r.suffix, r.total + l.suffix);
        res.maxsum = max({l.maxsum, r.maxsum, l.suffix + r.prefix});
        return res;
    }

    void build(int root, int lo, int hi) {
        if (lo == hi) {
            tree[root] = Node(arr[lo]);
            return;
        }
        int mid = (lo + hi) >> 1;
        build(lf, lo, mid);
        build(rt, mid + 1, hi);
        tree[root] = merge(tree[lf], tree[rt]);
    }

    void update(int root, int lo, int hi, int idx, int val) {
        if (lo == hi) {
            tree[root] = Node(val);
            return;
        }
        int mid = (lo + hi) >> 1;
        if (idx <= mid)
            update(lf, lo, mid, idx, val);
        else
            update(rt, mid + 1, hi, idx, val);
        tree[root] = merge(tree[lf], tree[rt]);
    }

    Node query(int root, int lo, int hi, int i, int j) {
        // Non-overlapping
        if (j < lo || hi < i) return Node(-1e18); // Node with very small values
        // Fully inside
        if (i <= lo && hi <= j) return tree[root];
        int mid = (lo + hi) >> 1;
        Node left = query(lf, lo, mid, i, j);
        Node right = query(rt, mid + 1, hi, i, j);
        // If left or right is out of bounds, just return the valid one
        if (left.maxsum == -1e18) return right;
        if (right.maxsum == -1e18) return left;
        return merge(left, right);
    }
};

void solve() {
    int n, q;
    cin >> n >> q;
    for (int i = 1; i <= n; i++) cin >> arr[i];
    SegTree seg;
    seg.build(1, 1, n);
    while (q--) {
        int op;
        cin >> op;
        if (op == 2) {
            int l, r; // Query for max subarray sum
            cin >> l >> r;
            cout << seg.query(1, 1, n, l, r).maxsum << "\n";
        } else if (op == 1) {
            int idx, val; // Update arr[idx] = val
            cin >> idx >> val;
            seg.update(1, 1, n, idx, val);
        }
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
