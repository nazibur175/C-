#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define mod 1000000007
#define test int t; cin >> t; while (t--)

void solve() {
    test {
        int n, k;
        cin >> n >> k;        
        vector<int> a(n);
        int ans=0;
        for (int i=0; i<n; i++) {
            cin>>a[i];
            ans+=a[i];
        }        
        sort(a.begin(), a.end());
        int m1=a[0];
        int prev=a[1];
        while (k>0) {
            int cur=(m1+prev+1)/2; 
            ans+=cur;
            k--;
            if (cur==prev) {
                ans+=cur*k;
                break;
            }
            prev=cur;        
        }

        cout<<ans<<"\n";
    }
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
