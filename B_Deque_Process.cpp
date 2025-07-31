#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define mod 1000000007
#define test int T; cin >> T; while (T--)


void solve() {
    int n;
    cin >> n;
    deque<int> d(n);
    for (int i = 0; i < n; i++) {
        cin >> d[i];
    }
    int temp=0;
    string ans;
    for (int i=0;i<n;i++) {
        int l = d.front();
        int r = d.back();
        if(temp){
            if (l < r) {
                ans += 'R';
                d.pop_back();
            } else {
                ans += 'L';
                d.pop_front();
            }
        } else {
            if (l < r) {
                ans += 'L';
                d.pop_front();
            } else {
                ans += 'R';
                d.pop_back();
            }
        }
        temp=1-temp;
    }
    cout<<ans<<endl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    test {
        solve();
    }
    return 0;
}
