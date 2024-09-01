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
int minimum(int pos){
    if(pos==n){
        return 0;
    }
    int x=INT64_MAX;
    if(dp[pos]!=-1) return dp[pos];
    for(int kk=1;kk<=k;kk++){
        if(pos+kk<=n)
        x=min(x,minimum(pos+kk)+ abs(a[pos]-a[pos+kk]));
    }
        return dp[pos]=x;
    
}
void solve(){
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    memset(dp,-1,sizeof(dp));
    // cout<<minimum(1)<<endl;
    minimum(1);
    cout<<dp[1]<<endl;

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}