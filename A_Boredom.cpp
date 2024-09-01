#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
map<int, int> cnt;
const int N = 1e5 + 9;
int dp[N];
void solve() {
    int n;
    cin>>n;
    int a[n+9];
    int ma=0;
    for (int i=1; i<=n; i++) {
        cin>>a[i];
        ma=max(ma,a[i]);
        cnt[a[i]]++;
    }
    dp[0]=0;
    dp[1]=cnt[1];
    for (int i=2; i<=ma; i++) {
        dp[i]=max(dp[i - 1],dp[i - 2]+(i*cnt[i]));
    }
    cout << dp[ma] << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
