#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n; 
        cin>>n;
		vector<int> a(n); 
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
		vector<int> b(n); 
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
		bool ans = true;
		vector<int> c(n);
		for(int i = 0; i < n; i++) {
			c[i] = lcm(a[i], b[i]);
		}
		int g = c[0];
		for(int i = 0; i < n; i++) {
			g = gcd(g, c[i]);
			if(g != a[i]) 
                ans = false;
		}
		g = c[n-1];
		for(int i = n-1; i >= 0; i--) {
			g = gcd(g, c[i]);
			if(g != b[i]) 
                ans = false;
		}
		if(ans) 
            cout << "YES\n";
		else 
            cout << "NO\n";
        
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}