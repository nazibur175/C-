#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define mod 1000000007
#define test int t; cin>>t; while(t--)

vector<int> parent, sizee; 

void makeSet(int n) {
    parent.resize(n + 1);
    sizee.resize(n + 1);
    for (int i = 0; i <= n; i++) {
        parent[i] = i;
        sizee[i] = 1;
    }
}

int findUPar(int node) {
    if (node == parent[node]) 
        return node; 
    return parent[node] = findUPar(parent[node]);
}

bool unionBySize(int u, int v) {
    int ulp_u = findUPar(u); 
    int ulp_v = findUPar(v); 
    if (ulp_u == ulp_v) return false; 
    if(sizee[ulp_u] < sizee[ulp_v]) 
        swap(ulp_u, ulp_v);
    parent[ulp_v] = ulp_u;
    sizee[ulp_u] += sizee[ulp_v];
    return true;
}

void solve() {
    int n, m;
    cin >> n >> m;

    vector<pair<int,int>> edges(m + 1);
    for (int i = 1; i <= m; i++) {
        cin >> edges[i].first >> edges[i].second;
    }

    makeSet(n);
    vector<int> ans(m + 1);

    int components = n;
    ans[m] = components;

    // Add edges in reverse (simulate deleting forward)
    for (int i = m; i >= 1; i--) {
        if (unionBySize(edges[i].first, edges[i].second))
            components--;
        ans[i - 1] = components;
    }

    // Output result after each deletion
    for (int i = 1; i <= m; i++) {
        cout << ans[i] << "\n";
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
