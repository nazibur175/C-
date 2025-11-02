#include <bits/stdc++.h>
using namespace std;

const int MAXN = 100005;

vector<int> g[MAXN], rg[MAXN];
vector<int> order, comp;
bool used[MAXN];
int comp_id[MAXN], n, m, k;
vector<int> comp_size;
vector<vector<int>> dag;
int indeg[MAXN];

void dfs1(int v) {
    used[v] = true;
    for (int u : g[v])
        if (!used[u])
            dfs1(u);
    order.push_back(v);
}

void dfs2(int v, int id) {
    comp_id[v] = id;
    comp.push_back(v);
    for (int u : rg[v])
        if (comp_id[u] == -1)
            dfs2(u, id);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        cin >> n >> m >> k;
        for (int i = 1; i <= n; i++) {
            g[i].clear();
            rg[i].clear();
            used[i] = false;
            comp_id[i] = -1;
        }

        for (int i = 0; i < m; i++) {
            int u, v;
            cin >> u >> v;
            g[u].push_back(v);
            rg[v].push_back(u);
        }

        // Step 1: Kosaraju - order
        order.clear();
        for (int i = 1; i <= n; i++)
            if (!used[i])
                dfs1(i);

        // Step 2: Kosaraju - reverse graph
        reverse(order.begin(), order.end());
        comp_size.clear();
        int cid = 0;
        for (int v : order) {
            if (comp_id[v] == -1) {
                comp.clear();
                dfs2(v, cid);
                comp_size.push_back(comp.size());
                cid++;
            }
        }

        // Step 3: Build DAG
        dag.assign(cid, {});
        vector<int> indeg(cid, 0);
        for (int v = 1; v <= n; v++) {
            for (int u : g[v]) {
                if (comp_id[v] != comp_id[u]) {
                    dag[comp_id[v]].push_back(comp_id[u]);
                    indeg[comp_id[u]]++;
                }
            }
        }

        // Step 4: Topo order + DP
        vector<int> dp(cid, 0);
        queue<int> q;
        for (int i = 0; i < cid; i++) {
            dp[i] = comp_size[i];
            if (indeg[i] == 0) q.push(i);
        }

        int ans = 0;
        while (!q.empty()) {
            int v = q.front(); q.pop();
            for (int u : dag[v]) {
                dp[u] = max(dp[u], dp[v] + comp_size[u]);
                indeg[u]--;
                if (indeg[u] == 0) q.push(u);
            }
        }

        // Step 5: Sort and take best k
        sort(dp.rbegin(), dp.rend());
        ans = 0;
        for (int i = 0; i < min(k, (int)dp.size()); i++)
            ans += dp[i];

        cout << ans << "\n";
    }
}
