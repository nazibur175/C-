/*You are given an array of size N(1e5). You will be given Q(1e5) queries.
Type-1: Given (L,R,x) update the subarray A[L,R] such that A[i]=min(A[i],x)
Type-2: Given (L,R) answer the sum of subArray A[L.......R]*/

#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
int n, q;
int A[N];
int blk_sz;
int num_blk;

vector<long long> sum_blk;
vector<int> mx_blk;
vector<int> lzy_blk;
vector<int> L, R; // block boundaries

void build() {
    blk_sz = sqrt(n) + 1;
    num_blk = (n + blk_sz - 1) / blk_sz;
    sum_blk.assign(num_blk, 0);
    mx_blk.assign(num_blk, 0);
    lzy_blk.assign(num_blk, INT_MAX);
    L.resize(num_blk);
    R.resize(num_blk);

    for (int b = 0; b < num_blk; b++) {
        L[b] = b * blk_sz + 1;
        R[b] = min(n, (b + 1) * blk_sz);
        for (int i = L[b]; i <= R[b]; i++) {
            sum_blk[b] += A[i];
            mx_blk[b] = max(mx_blk[b], A[i]);
        }
    }
}

void apply_block(int b, int x) {
    // Fully apply min(A[i], x) for block b
    if (mx_blk[b] <= x) return;

    sum_blk[b] = 0;
    mx_blk[b] = 0;
    for (int i = L[b]; i <= R[b]; i++) {
        A[i] = min(A[i], x);
        sum_blk[b] += A[i];
        mx_blk[b] = max(mx_blk[b], A[i]);
    }
}

// Update range [l, r] with min(A[i], x)
void range_min_update(int l, int r, int x) {
    int bl = (l - 1) / blk_sz;
    int br = (r - 1) / blk_sz;

    if (bl == br) {
        apply_block(bl, INT_MAX); // apply pending lazy if any
        for (int i = l; i <= r; i++) {
            if (A[i] > x) {
                sum_blk[bl] -= (A[i] - x);
                A[i] = x;
            }
        }
        mx_blk[bl] = *max_element(A + L[bl], A + R[bl] + 1);
        return;
    }

    // left partial block
    apply_block(bl, INT_MAX);
    for (int i = l; i <= R[bl]; i++) {
        if (A[i] > x) {
            sum_blk[bl] -= (A[i] - x);
            A[i] = x;
        }
    }
    mx_blk[bl] = *max_element(A + L[bl], A + R[bl] + 1);

    // right partial block
    apply_block(br, INT_MAX);
    for (int i = L[br]; i <= r; i++) {
        if (A[i] > x) {
            sum_blk[br] -= (A[i] - x);
            A[i] = x;
        }
    }
    mx_blk[br] = *max_element(A + L[br], A + R[br] + 1);

    // full blocks in between
    for (int b = bl + 1; b <= br - 1; b++) {
        if (mx_blk[b] <= x) continue;
        apply_block(b, x);
    }
}

long long range_sum_query(int l, int r) {
    int bl = (l - 1) / blk_sz;
    int br = (r - 1) / blk_sz;
    long long ans = 0;

    if (bl == br) {
        for (int i = l; i <= r; i++) ans += A[i];
        return ans;
    }

    for (int i = l; i <= R[bl]; i++) ans += A[i];
    for (int b = bl + 1; b <= br - 1; b++) ans += sum_blk[b];
    for (int i = L[br]; i <= r; i++) ans += A[i];
    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> q;
    for (int i = 1; i <= n; i++) cin >> A[i];
    build();

    while (q--) {
        int type;
        cin >> type;
        if (type == 1) {
            int l, r, x;
            cin >> l >> r >> x;
            range_min_update(l, r, x);
        } else {
            int l, r;
            cin >> l >> r;
            cout << range_sum_query(l, r) << '\n';
        }
    }
    return 0;
}
