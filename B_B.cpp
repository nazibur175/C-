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
        int N=1e5+9;
        int dp[N]={0};
        dp[0]=1;
        for(int i=0;i<n;i++){
            for(int j=N-1;j>=a[i];j--) dp[j]+=dp[j-a[i]];
        }
        int ans=0;
        for(int i=1;i<N;i++) if(dp[i]) ans+=i;
        cout<<ans<<endl;
        
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}