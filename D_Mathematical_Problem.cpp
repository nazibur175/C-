#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int inf=1e9;
int a[100];
void solve(){
    test{
        int n;
        string s;
        cin >> n;
		cin >> s;
		int ans = inf;
		for (int st = 0; st < n - 1; st++) {
			int cnt = 0;
			for (int i = 0; i < n; i++) {
				if (i == st) {
					a[cnt++] = 10 * (s[i] - '0') + (s[i + 1] - '0');
					i++;
				}
				else a[cnt++] = (s[i] - '0');
			}

			int val = 0;
			for (int i = 0; i < cnt; i++) {
				if (a[i] == 0) {
					val = -1;
					break;
				}
				if (a[i] == 1) continue;
				val += a[i];
            }
			if (!val) val = 1;
			if (val == -1) val = 0;
			ans = min(ans, val);
		}
        
		cout << ans << endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}