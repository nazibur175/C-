#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
vector<int>v[200005];
int a[200005];
int mx[200005], mn[200005];
void dfs(int nd, int par) {
    if (par==-1) {
        mx[nd]=a[nd];
        mn[nd]=a[nd];
    } 
    else{
        mx[nd] = max(a[nd],a[nd]-mn[par]);
        mn[nd] = min(a[nd],a[nd]-mx[par]);
    }

    for (int ch:v[nd]){
        if(ch!=par){
            dfs(ch,nd);
        }
    }
}
void solve(){
    test{
        int n;
        cin>>n;
        for (int i=1; i<=n;i++) {
            cin>>a[i];
            v[i].clear();
            mx[i]=0;
            mn[i]=0;
        }

        for (int i = 1; i <= n - 1; i++) {
            int x, y;
            cin >> x >> y;
            v[x].push_back(y);
            v[y].push_back(x);
        }

        dfs(1, -1); // root is 1, parent is -1 (no parent)

        for (int i = 1; i <= n; i++) {
            cout << mx[i] << " ";
        }
        cout << "\n";
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}