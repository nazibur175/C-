#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
string s;
int n;
const int N=1e3;
int dp[N][N];
int cal(int l,int r){
    if(l>=r) 
        return 1;
    if(dp[l][r]!=-1) 
        return dp[l][r];
    if(s[l]==s[r]) 
        return dp[l][r]= cal(l+1,r-1);
    else{
        return dp[l][r]=0;
    }
}
void solve(){
    cin>>n;
    cin>>s;
    memset(dp,-1,sizeof(dp));
    int ans = 0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(cal(i,j)){
                ans=max(ans,j-i+1);
            }
        }
    }
    cout<<ans<<endl;

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}