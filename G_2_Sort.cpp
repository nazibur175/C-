#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,k;
        cin>>n>>k;
		vector<int>v(n);
		for(int i=0;i<n;i++){
			cin>>v[i];
		}
		int ans = 0;
		int cur = 1;
		for(int i=1;i<n;i++){
			if(v[i]*2<=v[i-1]){
				cur = 0;
			}
			cur++;
			if(cur>k) ans++;
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