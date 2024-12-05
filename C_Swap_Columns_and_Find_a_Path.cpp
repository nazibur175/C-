#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        int a[n+1];
        int b[n+1];
        for(int i=1;i<=n;i++) cin>>a[i];
        for(int i=1;i<=n;i++) cin>>b[i];

        int presum[n+1]={0};
        for(int i=1;i<=n;i++){
            presum[i]=presum[i-1]+(max(a[i],b[i]));
        }
        int ans=-1e18;
        for(int i=1;i<=n;i++){
            ans=max(ans,presum[n]+min(a[i],b[i]));
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