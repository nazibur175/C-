#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define mod 1000000007
#define test int t; cin >> t; while(t--)

int query(int l, int r) {
    int k = (r - l) + 1;
    cout << "? " << k << " ";
    for (int i = l; i <= r; i++) {
        cout << i << " ";
    }
    cout << endl;
    cout << flush;
    int x;
    cin >> x;
    return x;
}

void solve() {
    test {
        int n;
        cin >> n;
        int a[n+1];  
        for (int i = 1; i <= n; i++) cin >> a[i];

        int pre[n+1] = {0};  
        for (int i = 1; i <= n; i++) {
            pre[i] = pre[i - 1] + a[i];
        }

        int l = 1, r = n;
        //int ans = 0;

        while (l <= r) {
            int mid = (l + r) / 2;

            int ager_sum = pre[mid] - pre[l - 1];

            if (query(l, mid) > ager_sum) {
                r = mid-1; 
            } else {
                l = mid + 1; 
            }
        }

        cout << "! " << r+1 << endl;
        cout << flush;
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
