#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)

void solve(){
    test{
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        sort(a,a+n);
        int ans=1e18;
        for(int i=0;i<n-1;i++){
            int sum=a[i]+a[i+1];
            int in = lower_bound(a,a+n,sum)-a;
            //cout<<i<<" "<<in<<endl;
            //cout<<(n-in+1)<<endl;
            ans=min(ans, i+(n-in));
        }
        cout<<ans<<endl;
    }
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}