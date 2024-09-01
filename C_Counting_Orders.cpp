#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n, i;
        cin >> n;

    vector<int> a(n);
    vector<int> b(n);
    for (i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (i = 0; i < n; ++i) {
        cin >> b[i];
    }
    
    sort(a.begin(), a.end());
    sort(b.rbegin(), b.rend());

    int ans = 1;
    for (i = 0; i < n; ++i) {
        int cnt = a.end() - upper_bound(a.begin(), a.end(), b[i]);
        cnt = max(0LL, cnt - i);
        ans = (ans * cnt) % mod;
    }
        cout<<ans<<endl;;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}