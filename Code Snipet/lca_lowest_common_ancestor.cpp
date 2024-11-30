#include <bits/stdc++.h>
using namespace std;
const int N = 100005; 
int LOG;
vector<int> tree[N];
int level[N];
int sp[N][LOG]; // Sparse table

void dfs(int node, int parent) {
    level[node] = level[parent] + 1;
    sp[node][0] = parent;

    // Precompute ancestors for the sparse table
    for (int i = 1; i < LOG; ++i) {
        sp[node][i] = sp[sp[node][i - 1]][i - 1];
    }

    for (int child : tree[node]) {
        if (child != parent) {
            dfs(child, node);
        }
    }
}

// Function to equalize the levels of two nodes
int lift_node(int node, int k) {
    for (int i = 0; i < LOG; ++i) {
        if (k & (1 << i)) {
            node = sp[node][i];
        }
    }
    return node;
}

// Function to compute LCA of two nodes
int lca(int u, int v) {
    if (level[u] < level[v]) {
        swap(u, v);
    }

    // Equalize the level of u and v
    u = lift_node(u, level[u] - level[v]);
    if (u == v) return u;
    // Binary lifting to find the LCA
    for (int i = LOG - 1; i >= 0; --i) {
        if (sp[u][i] != sp[v][i]) {
            u = sp[u][i];
            v = sp[v][i];
        }
    }
    return sp[u][0];
}

int main() {
    int n, q; 
    cin >> n >> q;

    LOG = log2(n)+1;
    for (int i = 1; i < n; ++i) {
        int u, v;
        cin >> u >> v;
        tree[u].push_back(v);
        tree[v].push_back(u);
    }

    memset(sp, 0, sizeof(sp));
    level[0] = -1; 
    dfs(1, 0);

    while (q--) {
        int u,v;
        cin>>u>>v;
        cout<<lca(u,v)<< '\n';
    }

    return 0;
}
