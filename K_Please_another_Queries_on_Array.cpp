#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define int long long
const int N = 400000;
const int NN = 300;
int arr[N + 5];
int prime[NN + 5];
vector<int> primes;
uint64_t factor_mask[NN + 5];

void seive() {
    vector<bool> is_com(NN + 1);
    for (int i = 2; i * i <= NN; i++) if (!is_com[i])
        for (int j = i * i; j <= NN; j += i)
            is_com[j] = true;
    for (int i = 2; i <= NN; i++) if (!is_com[i])
        primes.push_back(i);
}

void precompute() {
    seive();
    for (int x = 1; x <= NN; x++) {
        uint64_t m = 0;
        int v = x;
        for (int i = 0; i < primes.size(); i++) {
            if (v % primes[i] == 0) {
                m |= (1ULL << i);
                while (v % primes[i] == 0) v /= primes[i];
            }
        }
        factor_mask[x] = m;
    }
}

int bigmod(int a, int e) {
    int res = 1;
    while (e) {
        if (e & 1) res = res * a % mod;
        a = a * a % mod;
        e >>= 1;
    }
    return res;
}

// Node storage: prod and mask
 int tree_prod[4 * N + 5];
 uint64_t tree_mask[4 * N + 5];
 int lazy_mul[4 * N + 5];
 uint64_t lazy_mask[4 * N + 5];

struct Seg_tree {
    Seg_tree() {}

    // merge two segments
    inline void milao(int root) {
        int l = root << 1, r = l | 1;
        tree_prod[root] = (int)(tree_prod[l] * tree_prod[r] % mod);
        tree_mask[root] = tree_mask[l] | tree_mask[r];
    }

    // apply lazy to node
    inline void apply(int root, int lo, int hi, int mul, uint64_t msk) {
        int len = hi - lo + 1;
        tree_prod[root] = (int)(tree_prod[root] * bigmod(mul, len) % mod);
        tree_mask[root] |= msk;
        lazy_mul[root] = (int)(lazy_mul[root] * mul % mod);
        lazy_mask[root] |= msk;
    }

    // push lazy down
    inline void push(int root, int lo, int hi) {
        if (lazy_mul[root] == 1 && lazy_mask[root] == 0) return;
        int mid = (lo + hi) >> 1;
        apply(root << 1, lo, mid, lazy_mul[root], lazy_mask[root]);
        apply(root << 1 | 1, mid + 1, hi, lazy_mul[root], lazy_mask[root]);
        lazy_mul[root] = 1;
        lazy_mask[root] = 0;
    }

    void build(int root, int lo, int hi) {
        lazy_mul[root] = 1;
        lazy_mask[root] = 0;
        if (lo == hi) {
            tree_prod[root] = arr[lo] % mod;
            tree_mask[root] = factor_mask[arr[lo]];
            return;
        }
        int mid = (lo + hi) >> 1;
        build(root << 1, lo, mid);
        build(root << 1 | 1, mid + 1, hi);
        milao(root);
    }

    void update(int root, int lo, int hi, int l, int r, int val) {
        if (r < lo || hi < l) return;
        if (l <= lo && hi <= r) {
            apply(root, lo, hi, val, factor_mask[val]);
            return;
        }
        push(root, lo, hi);
        int mid = (lo + hi) >> 1;
        update(root << 1, lo, mid, l, r, val);
        update(root << 1 | 1, mid + 1, hi, l, r, val);
        milao(root);
    }

    pair<int, uint64_t> query(int root, int lo, int hi, int l, int r) {
        if (r < lo || hi < l) return {1, 0ULL};
        if (l <= lo && hi <= r) return {tree_prod[root], tree_mask[root]};
        push(root, lo, hi);
        int mid = (lo + hi) >> 1;
        auto left = query(root << 1, lo, mid, l, r);
        auto right = query(root << 1 | 1, mid + 1, hi, l, r);
        return { (int)(left.first * right.first % mod), left.second | right.second };
    }
};

void solve() {
    precompute();
    int n, q;
    cin >> n >> q;
    for (int i = 1; i <= n; i++) cin >> arr[i];

    Seg_tree seg;
    seg.build(1, 1, n);

    while (q--) {
        string op;
        cin >> op;
        if (op == "MULTIPLY") {
            int l, r, x;
            cin >> l >> r >> x;
            seg.update(1, 1, n, l, r, x);
        } else { // TOTIENT
            int l, r;
            cin >> l >> r;
            auto res = seg.query(1, 1, n, l, r);
            int ans = res.first;
            uint64_t m = res.second;
            for (int i = 0; i < primes.size(); i++) {
                if (m & (1ULL << i)) {
                    ans = (int)(ans * (primes[i] - 1) % mod);
                    ans = (int)(ans * bigmod(primes[i], mod - 2) % mod);
                }
            }
            cout << ans << '\n';
        }
    }
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}