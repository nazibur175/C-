#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod      1000
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
        int b,p;
	    cin>>b>>p;
         double x=p*(log10(b));
        x=x-(int)x; 
        double ans=pow(10, x);
        ans=ans*100.00;
		int aa=ans;
		int bb=power(b,p)%1000;
		printf("%lld...%03lld\n",aa,bb);
    }
}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}
