#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
        test{
        int n; 
        cin >> n;
		vector<int> p(n);
		for(auto &x : p) cin >> x;
 
		int ans = 1;
		int dp[n]={0};
        dp[0]=1;
		for(int i = 1; i < n; i++) {
			if(p[i] > p[i-1]) dp[i] = dp[i-1] + 1;
			else dp[i] = dp[i-1] + (i+1);
			ans += dp[i];
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