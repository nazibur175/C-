#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
#define test int t; cin >> t; while (t--)
void solve() {
    test {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i=0; i<n;i++) cin>>v[i];
        
        bool f = false;
        for (int i=0;i<n;i++) {
            if (is_sorted(v.begin(), v.end())) {
                f = true;
                break;
            }
           
            int temp = v.back();
            v.pop_back();
            v.insert(v.begin(), temp);
        }
        if (f)cout<<"Yes"<< endl;
        else cout<<"No"<< endl;
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
