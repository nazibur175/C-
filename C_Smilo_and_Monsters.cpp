#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
    int n;
	cin >> n;
	int ans = 0;
	vector<int> v(n);
	for(auto &x : v) cin >> x, ans += x;
	sort(v.begin(), v.end());
	int extra = ans / 2;
	ans = (ans+1)/2;
	while(extra > 0) {
        extra -= v.back();
        ans++;
        v.pop_back();
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