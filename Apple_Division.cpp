#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
int a[200];
int total;
int ans=INT_MAX;
int sum;
int n;
void generateMask(int n){
    for(int i=0;i<(1<<n);i++){
		int sum=0;
		for(int j=n-1;j>=0;j--){
			if((i>>j)&1){
				// cout<<j<<" ";
                sum+=a[j];
			}
			// else cout<<0<<" ";
		}
		// cout<<endl;
        int dif=abs(sum-(total-sum));
        ans=min(ans,dif);
	}
    cout<<ans<<endl;
}

void solve(){

    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
        total+=a[i];
    }
    generateMask(n);
    
}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}