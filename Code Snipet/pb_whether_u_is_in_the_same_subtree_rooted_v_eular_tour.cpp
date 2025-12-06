#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 2e5 + 5;

vector<int> g[N];
int arr[N], tin[N], tout[N], tmr = 0;

// Euler Tour to assign entry & exit times
void dfs(int u, int p) {
    tin[u] = ++tmr;
    for (int v : g[u]) {
        if (v == p) continue;
        dfs(v, u);
    }
    tout[u] = tmr;
}

void solve() {
    int n, q;
    cin >> n >> q;
    // Optional: Reading values at each node (not needed for subtree check)
    for (int i = 1; i <= n; i++) cin >> arr[i];
    for (int i = 1; i < n; i++) {
        int u, v; cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    dfs(1, 0); // Assume root is node 1
    while (q--) {
        int U, V;
        cin >> U >> V;
        // Check: U is in subtree rooted at V
        bool ans = tin[V] <= tin[U] && tin[U] <= tout[V];
        cout << (ans ? "Yes\n" : "No\n");
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
