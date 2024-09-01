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
    test{
        int h;
        cin>>h;
        int k=1;
        int c=0;
        while(h>0)
        {
            if(isprime(h)) {
                c++;
                break;
            }
            h=h-k;
            k*=2;
            c++;
        }
        if(h<0) cout<<-1<<endl;
        else cout<<c<<endl;
        
        
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}