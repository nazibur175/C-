#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define int2 uint8_t
#define int long long
#define rt ((root << 1) | 1)
#define lf (root << 1)
const int N = 4e5 + 5;
const int NN = 309;
int arr[N];
int prime[NN + 9];
vector<int> primes;
vector<map<int2, int>> tree(4 * N);
vector<map<int2, int>> lazy(4 * N);
vector<vector<int>> factor(301, vector<int>(65, 0));

void seive() {
    for (int i = 2; i * i <= NN; i++) {
        if (prime[i] == 0) {
            for (int j = i * i; j <= NN; j += i) {
                prime[j] = 1;
            }
        }
    }
    for (int i = 2; i <= NN; i++) {
        if (prime[i] == 0)
            primes.push_back(i);
    }
}

void precompute() {
    seive();
    for (int i = 1; i <= 300; i++) {
        int x = i;
        for (int j = 0; j < primes.size(); j++) {
            while (x % primes[j] == 0) {
                factor[i][j]++;
                x /= primes[j];
            }
            if (x == 1) break;
        }
    }
}

struct Seg_tree {
    Seg_tree() {}

    map<int2, int> milao(const map<int2, int> &x, const map<int2, int> &y) {
        map<int2, int> res = x;
        for (auto it : y) {
            res[it.first] += it.second;
        }
        return res;
    }

    void push(int root, int lo, int hi) {
        if (lazy[root].empty()) return;
        for (auto it : lazy[root]) {
            tree[root][it.first] += it.second * (hi - lo + 1);
        }
        if (lo != hi) {
            for (auto it : lazy[root]) {
                lazy[lf][it.first] += it.second;
                lazy[rt][it.first] += it.second;
            }
        }
        lazy[root].clear();
    }

    void prop(int root) {
        tree[root] = milao(tree[lf], tree[rt]);
    }

    void build(int root, int lo, int hi) {
        lazy[root].clear();
        if (lo == hi) {
            for (int i = 0; i < primes.size(); i++) {
                if (factor[arr[lo]][i]) {
                    tree[root][i] = factor[arr[lo]][i];
                }
            }
            return;
        }
        int mid = (lo + hi) >> 1;
        build(lf, lo, mid);
        build(rt, mid + 1, hi);
        prop(root);
    }

    void update(int root, int lo, int hi, int i, int j, int val) {
        push(root, lo, hi);
        if (j < lo || hi < i) return;
        if (i <= lo && hi <= j) {
            for (int k = 0; k < primes.size(); k++) {
                if (factor[val][k]) {
                    lazy[root][k] += factor[val][k];
                }
            }
            push(root, lo, hi);
            return;
        }
        int mid = (lo + hi) >> 1;
        update(lf, lo, mid, i, j, val);
        update(rt, mid + 1, hi, i, j, val);
        prop(root);
    }

    map<int2, int> query(int root, int lo, int hi, int i, int j) {
        push(root, lo, hi);
        if (i > hi || lo > j) return {};
        if (i <= lo && hi <= j) return tree[root];
        int mid = (lo + hi) >> 1;
        return milao(query(lf, lo, mid, i, j), query(rt, mid + 1, hi, i, j));
    }
};

int bigmod(int a, int b) {
    int res = 1;
    while (b > 0) {
        if (b % 2 == 1) res = (res * a) % mod;
        a = (a * a) % mod;
        b /= 2;
    }
    return res;
}

void solve() {
    precompute();
    int n, q;
    cin >> n >> q;
    for (int i = 1; i <= n; i++) cin >> arr[i];
    Seg_tree seg;
    seg.build(1, 1, n);
    while (q--) {
        string s;
        cin >> s;
        if (s == "TOTIENT") {
            int l, r;
            cin >> l >> r;
            map<int2, int> res = seg.query(1, 1, n, l, r);
            int ans = 1;
            for (auto it : res) {
                int p = primes[it.first];
                int e = it.second;
                if (e == 0 || p == 0) continue;
                int t1 = bigmod(p, e - 1);
                int t2 = t1 * (p - 1) % mod;
                ans = ans * t2 % mod;
            }
            cout << ans << "\n";
        } else {
            int l, r, val;
            cin >> l >> r >> val;
            seg.update(1, 1, n, l, r, val);
        }
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
