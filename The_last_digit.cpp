#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod      100000
#define test int t; cin>>t; while(t--)
int power(int base,int n){
	int result=1;
	while(n)
	{
		if(n%2==1)
		{
			result = (result*base)%mod;
			n--;
		}
		else {
			base=(base*base)%mod;
			n/=2;
		}
	}
	return result;
}
void solve(){
	test{
        int base,pow;
	    cin>>base>>pow;
	    cout<<power(base,pow)%10<<endl;
    }
}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}
