#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
const int N = 10000+9;
int dp[N][2][2][100+9];
int d;
string k;

int cal(const string &S, int pos, bool tight, bool lead, int sum) {
    if (pos == S.size()) return (sum%d==0 && !lead);
    int &ans = dp[pos][tight][lead][sum];
    if (ans != -1) return ans;
    ans = 0;

    int lim = tight ? (S[pos] - '0') : 9;
    for (int dig = 0; dig <= lim; dig++) {
        // if (!lead && dig == last) continue; 
        bool new_tight = tight && (dig == lim);
        bool new_lead = lead && (dig == 0);
        int new_sum = (sum+dig)%d;
        ans += cal(S, pos + 1, new_tight, new_lead, new_sum);
        ans%=mod;
    }

    return ans;
}

int f(string x) {
    // if (x < 0) return 0;
    string S = x;
    memset(dp, -1, sizeof(dp));
    return cal(S, 0, 1, 1, 0);
}
void solve(){
    cin>>k>>d;
    int ans=f(k)%mod;
    // cout<<mod<<endl;
    cout<<ans<<endl;
}
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
