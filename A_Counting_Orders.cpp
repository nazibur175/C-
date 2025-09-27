#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n; 
        cin >> n;
        vector<int> a(n);
        for (int i=0; i<n; i++) 
            cin >> a[i];
        sort(a.begin(), a.end());
        vector<int> b(n);
        for (int i=0; i<n; i++)
             cin >> b[i];
        sort(b.begin(), b.end(), greater<>());
        int ans = 1;
        for (int i=0; i<n; i++){
            int geq_count = a.size() - (upper_bound(a.begin(), a.end(), b[i]) - a.begin());
            ans = ans * max(geq_count - i, 0ll) % mod;
        }
        cout << ans << "\n";
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}