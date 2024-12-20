#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int N=1e6;
int dp[N];
int a[N];
int n;
int k;
int cal(int pos){
    if(pos==n){
        return 0;
    }
    int &ans=dp[pos];
    if(~ans) return ans;
    ans=INT64_MAX;
    for(int kk=1;kk<=k;kk++){
        if(pos+kk<=n)
        ans=min(ans,cal(pos+kk)+ abs(a[pos]-a[pos+kk]));
    }
        return ans;
    
}
void solve(){
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    memset(dp,-1,sizeof(dp));
    // cout<<cal(1)<<endl;
    cal(1);
    cout<<dp[1]<<endl;

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}