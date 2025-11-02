#include <bits/stdc++.h>
using namespace std;
using int64 = long long;
const int MOD = 1000000007;

int64 modpow(int64 a, int64 e) {
    int64 r = 1 % MOD;
    a %= MOD;
    while (e) {
        if (e & 1) r = (r * a) % MOD;
        a = (a * a) % MOD;
        e >>= 1;
    }
    return r;
}
int64 modinv(int64 a) { return modpow((a%MOD+MOD)%MOD, MOD-2); }

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;
    long long C;
    if (!(cin >> N >> C)) return 0;
    vector<int> W(N);
    for (int i=0;i<N;i++) cin >> W[i];
    vector<int> V(N);
    for (int i=0;i<N;i++) cin >> V[i];

    int M = 1<<N;
    // precompute sum of weights for each mask
    vector<long long> sumW(M,0);
    for (int mask=1; mask<M; ++mask){
        int lb = mask & -mask;
        int b = __builtin_ctz(lb);
        sumW[mask] = sumW[mask ^ lb] + W[b];
    }

    // ratio[i] = V[i] * inv(W[i]) mod MOD
    vector<int64> ratio(N);
    for (int i=0;i<N;i++){
        int64 invw = modinv(W[i]);
        ratio[i] = ( (int64)V[i] % MOD ) * invw % MOD;
    }

    // prob[mask] = probability (mod MOD) to reach exact mask
    vector<int64> prob(M, 0);
    prob[0] = 1; // start from empty set with probability 1
    int64 expected = 0;

    for (int mask = 0; mask < M; ++mask){
        if (prob[mask] == 0) continue;
        long long rem = C - sumW[mask];
        if (rem < 0) continue; // infeasible state (shouldn't normally happen)
        // gather available items in S
        int64 sum_ratio = 0;
        vector<int> avail;
        avail.reserve(N);
        for (int i=0;i<N;i++){
            if ( (mask>>i & 1) == 0 && W[i] <= rem ){
                avail.push_back(i);
                sum_ratio += ratio[i];
                if (sum_ratio >= MOD) sum_ratio -= MOD;
            }
        }
        if (avail.empty()) continue; // no possible transitions; process ends here
        if (sum_ratio == 0) {
            // extremely unlikely in practice; skip transitions to avoid division by zero
            continue;
        }
        int64 inv_sum = modinv(sum_ratio);

        for (int idx : avail){
            int next = mask | (1<<idx);
            int64 choose_prob = (ratio[idx] * inv_sum) % MOD; // P(select idx from this mask)
            int64 trans_prob = prob[mask] * choose_prob % MOD;
            // add expected contribution of taking item idx at this transition
            expected += trans_prob * ( (int64)V[idx] % MOD );
            expected %= MOD;
            // propagate probability to next mask
            prob[next] += trans_prob;
            if (prob[next] >= MOD) prob[next] -= MOD;
        }
    }

    cout << (expected%MOD + MOD) % MOD << "\n";
    return 0;
}
