#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int N=100000;
int dp[N];
int a[N];
int cost(int i){
    if(i==0) return dp[i]=0;
    else if(i==1) return dp[i]=abs(a[i]-a[i-1]);
    else if(dp[i]!=-1) return dp[i];
    else 
    return dp[i]=min(abs(a[i]-a[i-1])+cost(i-1),abs(a[i]-a[i-2])+cost(i-2));
}
void solve(){
    memset(dp,-1,sizeof(dp));
    int n;
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    int ans = cost(n-1);
    cout<<ans<<endl;
    for(int i=0;i<n;i++){
        cout<<dp[i]<<" ";
    }
    cout<<endl;

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}
