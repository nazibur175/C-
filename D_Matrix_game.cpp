#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)

int bigmod(int a, int b) {
    int res = 1;
    while (b > 0) {
        if (b % 2 == 1) {
            res = (res * a) % mod;
        }
        a = (a * a) % mod;
        b /= 2;
    }
    return res;
}
void solve(){
	test{
		int a,b,k;
		cin>>a>>b>>k;
		int n= k*(a-1) + 1;
		n%=mod;
		int m=1;
		int hor=1;
		for(int i=0;i<a;i++){
			m=(m*((n-i+mod)%mod))%mod;
			hor=hor*(i+1)%mod;
		}
		m=(m*bigmod(hor,mod-2))%mod;
		m=m*(b-1)%mod;
		m=m*k%mod;
		m= (m+1)%mod;
		cout<<n<<" "<<m<<"\n";
	}

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}