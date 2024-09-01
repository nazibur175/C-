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
        string s;
        cin>>s;
        int n=s.size();
        int flag=0;
        for(int i=0;i<n;i++){
            if(flag) break;
            for(int j=i+1;j<n;j++){
                int x=s[i]-'0';
                int y=s[j]-'0';
                x=x*10+y;
                if(isprime(x)){
                    cout<<x<<endl;
                    flag=1;
                    break;
                }
            }
            
        }
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}