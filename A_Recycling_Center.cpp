#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define mod 1000000007
#define test int T; cin >> T; while (T--)

void solve() {
    int n,c;
    cin>>n>>c;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    multiset<int> S(a.begin(), a.end());
    int coins = 0;
    int t = 0;
    while (!S.empty()){
        int bar=0;
        if (t < 63) {
            bar = (c >> t);
        } 
        auto it = S.upper_bound(bar);
        if (it!=S.begin()) {
            --it;
            S.erase(it);
        } else {
            auto it2 = prev(S.end());
            S.erase(it2);
            coins++;
        }
        t++;
    }
    cout<<coins<<endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    test {
        solve();
    }

    return 0;
}
