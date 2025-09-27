#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,x;
        cin>>n>>x;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        int l=INT64_MIN, r=INT64_MAX;
        int ans=0;
        for(int i=0;i<n;i++){
            if((l<=a[i]-x && a[i]-x<=r) || (l<=a[i]+x && a[i]+x<=r) || (a[i]-x<=l && r<=a[i]+x)) {
                l = max(l, a[i]-x);
                r = min(r, a[i]+x);
            } else {
                ans++;
                //cout<<i<<" "<<l<<" "<<r<<endl;
                l= a[i]-x;
                r= a[i]+x;
            }
        }
        cout << ans << endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}