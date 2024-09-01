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
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        int i=n-1;
        int j=0;
        int k=n-2;
        int l=1;
        int ans = abs(a[i]-a[j])+abs(a[j]-a[k])+abs(a[k]-a[l])+abs(a[l]-a[i]);
        cout<<ans<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}