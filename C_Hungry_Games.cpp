#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
int dp[200000+10];
void solve(){
    test{
        int n,x;
        cin>>n>>x;
        int a[n+1];
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        int pre[n+2]={0};
        for(int i=1;i<=n;i++){
            pre[i]=pre[i-1]+a[i];
        }
        int ans=0;
        dp[n+1]=0;
        dp[n+2]=0;
        for(int i=n;i>=1;i--){
            int j= upper_bound(pre+1,pre+n+1,pre[i-1]+x)-pre;
            dp[i]=dp[j+1]+j-i;
            ans+=dp[i];
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