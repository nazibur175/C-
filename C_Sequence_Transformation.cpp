#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
		cin >> n;
		vector<int> a(n);
		for (auto &it : a) cin >> it;
		vector<int> res(n+1,1);
		n = unique(a.begin(),a.end())-a.begin();
        //cout<<n<<endl;
		 a.resize(n);
		for (int i =0; i<n; i++) {
			res[a[i]]+= 1;
		}
		res[a[0]]-= 1;
		res[a[n-1]]-= 1;
		int ans =1e9;
		for (int i =0; i<n; i++) {
			ans = min(ans,res[a[i]]);
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