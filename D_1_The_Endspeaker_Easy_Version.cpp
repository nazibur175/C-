#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,m;
        cin>>n>>m;
        int a[n+1];
        int b[m+1];
        int presum[n+1]={0};
        for(int i=1;i<=n;i++) cin>>a[i];
        for(int i=1;i<=m;i++) cin>>b[i];
        int mx_val=0;
        for(int i=1;i<=n;i++){
            presum[i]=presum[i-1]+a[i];
            mx_val=max(mx_val,a[i]);
        }
        
        if(mx_val>b[1]){
            cout<<"-1"<<endl;
            continue;
        }
        int dp[m+1][n+1];
        int inf = 1e18;
        for(int i=0;i<=m;i++){
            for(int j=0;j<=n;j++){
                dp[i][j]=inf;
            }
        }
        dp[0][0]=0;
        // i = k
        for(int i=1;i<=m;i++){
            dp[i][0]=0;
            // j তম পজিশন থেকে পিছনের দিকে কতটা রিমুভ করতে পারবো। 
            for(int j=1;j<=n;j++){
                int temp = lower_bound(presum,presum+n+1,presum[j]-b[i])-presum;
                dp[i][j]=min(dp[i-1][j], (m-i)+dp[i][temp]);
            }
        }

       cout<<dp[m][n]<<endl;
       
    }
}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}