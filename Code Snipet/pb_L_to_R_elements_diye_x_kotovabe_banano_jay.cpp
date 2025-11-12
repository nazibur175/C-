#include <bits/stdc++.h>
using namespace std;

const int MAXN = 50005;
const int MAXV = 101;
const int MAXSUM = 101;

int N, Q, block;
int arr[MAXN];

struct Query {
    int l, r, x, idx;
    bool operator<(const Query& other) const {
        int blockA = l / block, blockB = other.l / block;
        if(blockA != blockB) return blockA < blockB;
        return r < other.r;
    }
};
vector<Query> queries;
int answers[MAXN];

int freq[MAXV]; // for window
int dp_fwd[MAXSUM];
int dp_bwd[MAXSUM];

void build_forwardDP(int left, int right) {
    fill(dp_fwd, dp_fwd+MAXSUM, 0);
    dp_fwd[0] = 1;
    for(int i = left; i <= right; ++i) {
        for(int s = MAXSUM-1; s >= arr[i]; --s) {
            dp_fwd[s] += dp_fwd[s-arr[i]];
        }
    }
}
void build_backwardDP(int L, int to) {
    fill(dp_bwd, dp_bwd+MAXSUM, 0);
    dp_bwd[0] = 1;
    for(int i = L; i <= to; ++i) {
        for(int s = MAXSUM-1; s >= arr[i]; --s) {
            dp_bwd[s] += dp_bwd[s-arr[i]];
        }
    }
}
int merge_ans(int X) {
    int ans = 0;
    for(int t = 0; t <= X; ++t) ans += dp_fwd[t] * dp_bwd[X-t];
    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> N >> Q;
    block = sqrt(N);
    for(int i=0;i<N;++i) cin >> arr[i];
    for(int i=0;i<Q;++i) {
        int l, r, x; cin >> l >> r >> x;
        queries.push_back({--l, --r, x, i});
    }
    sort(queries.begin(), queries.end());

    for(size_t i = 0; i < queries.size();) {
        size_t j = i;
        int blockStart = queries[i].l / block;
        int L0 = blockStart * block;
        int curR = L0-1;
        while(j < queries.size() && queries[j].l / block == blockStart) {
            int L = queries[j].l, R = queries[j].r, X = queries[j].x;
            if(L >= L0) {
                // Forward DP: [L, R]
                build_forwardDP(L, R);
                answers[queries[j].idx] = (X < MAXSUM) ? dp_fwd[X] : 0;
            } else {
                // [L, L0-1] --> backward, [L0, R] --> forward, merge
                build_forwardDP(L0, R);
                build_backwardDP(L, L0-1);
                answers[queries[j].idx] = (X < MAXSUM) ? merge_ans(X) : 0;
            }
            ++j;
        }
        i = j;
    }
    for(int i = 0; i < Q; ++i) cout << answers[i] << '\n';
    return 0;
}
