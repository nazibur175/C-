#include<bits/stdc++.h>
using namespace std;
#define int long long 
// #define   mod      1000000007
const int mod = 1e17;
#define test int t; cin>>t; while(t--)
int power(int base,int n){
	int result=0;
	while(n)
	{
		if(n%2==1)
		{
			result = (result+base)%mod;
			n--;
		}
		else {
			base=(base+base)%mod;
			n/=2;
		}
	}
	return result;
}
void solve(){
	int base,pow;
	cin>>base>>pow;
	cout<<power(base,pow)<<endl;
}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}
