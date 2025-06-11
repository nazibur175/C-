#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
bool isprime(int n){
	if(n<2) return false;
	if(n<=3) return true;
	if(n%2==0) return false;
	for(int i=3;i<=sqrt(n);i+=2){
		if(n%i==0) return false;
	}
	return true;
}

void solve(){
      int n;
      cin>>n;
      int a=2*n;
      int b=n;
      while(1){
            if(isprime(a)==0 && isprime(b)==0){
                  cout<<a<<" "<<b<<endl;
                  break;
            }
            a++;
            b++;
      }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}