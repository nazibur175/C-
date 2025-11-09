//You are given a graph containing n(1e5) nodes. Each node has exactly one outdegree. 
//You will be given Q (1e5) queries. In each query you will be given a pair (U,D)
// where U is the source node and you have to tell which node you will reach after D hops(1e15).
#include <bits/stdc++.h>
using namespace std;
const int LOG = 60; // because 2^60 > 1e15

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;

    vector<vector<int>> up(LOG, vector<int>(n + 1));

    // Read n directed edges (each node has exactly one outgoing edge)
    for (int i = 1; i <= n; i++) {
        int u, v;
        cin >> u >> v;
        up[0][u] = v;
    }

    // Precompute binary lifting table
    for (int k = 1; k < LOG; k++) {
        for (int i = 1; i <= n; i++) {
            up[k][i] = up[k - 1][ up[k - 1][i] ];
        }
    }

    // Answer Q queries
    while (q--) {
        long long u, d;
        cin >> u >> d;
        for (int k = 0; k < LOG; k++) {
            if (d & (1LL << k)) {
                u = up[k][u];
            }
        }
        cout << u << '\n';
    }

    return 0;
}
