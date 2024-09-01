#include<bits/stdc++.h>
using namespace std;
#define int long long 
const int   mod = 1e9+7 ;
#define test int t; cin>>t; while(t--)
void solve(){
	test{
		int n;
		cin>>n;
		string s;
		cin>>s;
		int ans=1;
		int flag=0;
		for(int i=0;i<n-2;i++){
			int c=0;
			int x=(s[i]-'0')&(s[i+1]-'0');
			int y=(s[i]-'0')|(s[i+1]-'0');
			int z=(s[i]-'0')^(s[i+1]-'0');
			int k=s[i+2]-'0';
			if(x==k) c++;
			if(y==k) c++;
			if(z==k) c++;
			if(c==0) {
				flag=0;
				break;
			}
			else {
				ans=((ans%mod)*(c%mod))%mod;
				flag=1;
			}
		}
		// cout<<endl;
		if(flag==0) cout<<0<<endl;
		else 
		cout<<ans<<endl;
	}

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}