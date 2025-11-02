#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int B = 20;
const int N = 100005;
int par[N][B], lvl[N];
vector<int>adj[N];
void dfs(int n, int p = 0)
{
	par[n][0] = p;
	lvl[n] = lvl[p] + 1;
	for (int i = 1; i < B; i++)
	{
		par[n][i] = par[par[n][i - 1]][i - 1];
	}
	for (auto it : adj[n])
	{
		if (it != p)
		{
			dfs(it, n);
		}
	}
}
int get_LCA(int p, int q)
{
	if (lvl[p] < lvl[q])
		swap(p, q);
	int Log = log2(lvl[p]) + 1;
	for (int i = Log ; i >= 0 ; i--)
	{
		if (lvl[p] - (1 << i) >= lvl[q])
			p = par[p][i];
	}
	if (p == q)
		return p;
	for (int i = Log ; i >= 0 ; i--)
	{
		if (par[p][i] != par[q][i])
		{
			p = par[p][i];
			q = par[q][i];
		}
	}
	return par[p][0];
}
int get_kth(int n, int k)
{
	int Log = log2(k);
	int p = n;
	for (int i = 0; i <= Log; i++)
	{
		if (k & (1 << i))
			p = par[p][i];
	}
	return p;
}
void solve() {
    int t; cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;

        for (int i = 1; i <= n; i++) {
            adj[i].clear();
            lvl[i] = 0;
            for (int j = 0; j < B; j++) par[i][j] = 0;
        }

        for (int i = 1; i < n; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        dfs(1);

        while (q--) {
            int u, v;
            cin >> u >> v;
            cout << get_LCA(u, v) << "\n";
        }
    }
}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}