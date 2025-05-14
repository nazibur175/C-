#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod           998244353

#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        sort(a,a+n);
        int ans=1;
        for(int i=0;i<n;i++){
            int cnt = a[i]-i;
            if(cnt<0)cnt=0;
            ans= (ans * cnt)%mod;
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