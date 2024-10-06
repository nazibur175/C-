#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,m;
        cin>>n>>m;
        vector<pair<int,int>>p(n);
		for (int i=0; i<n; i++) 
            cin >> p[i].first;
		for (int i = 0; i < n; i++) 
            cin >> p[i].second;
 
		sort(p.begin(),p.end());
 
		int ans = 0;
 
		for (int i = 0; i < n; i++) {
			int val = min(m/p[i].first, p[i].second);
			ans = max(ans, val * p[i].first);
		}
 
		for (int i=0; i<n-1; i++) {
			if (p[i].first+1!= p[i+1].first) continue;
			int cur = m;

			int a = min(cur / p[i].first, p[i].second);
			cur -= a * p[i].first;
			int b = min(cur / p[i+1].first, p[i+1].second);
			cur -= b * p[i + 1].first;
 
			int x =min({a,p[i + 1].second-b,cur});
			cur -=x;

			ans =max(ans, m - cur);
		}
		cout<<ans<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}