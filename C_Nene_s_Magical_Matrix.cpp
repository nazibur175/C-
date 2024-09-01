#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
    int n;
    cin>>n;
	int ans=0;
	for(int i=1;i<=n;i++) 
        ans+=(2*i-1)*i;
	cout<<ans<<' '<<2*n<<endl;
	for(int i=n;i>=1;i--){
		cout<<"1 "<<i<<' ';
		for(int j=1;j<=n;j++) cout<<j<<' ';
            cout<<endl;
		cout<<"2 "<<i<<' ';
		for(int j=1;j<=n;j++) cout<<j<<' ';
            cout<<endl;
	    }
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}