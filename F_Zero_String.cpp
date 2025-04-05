#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int inf=1e9;
// n=one, m=zero
int cal(int n,int m,vector<vector<int>>&dp){
    if(n==0) return 0;
    if(m==0) return 1;
    if(dp[n][m]!=-1) return dp[n][m];
    int ans=inf;
    if(m){
        ans=min(ans,cal(n,m-1,dp)+1);           
    }
    if(n){
        ans=min(ans,cal(n-1,m,dp)+1);
    }
    return dp[n][m]=ans;
}
void solve(){
    test{
        int n;
        cin>>n;
        string s;
        cin>>s;
        int zero=0;
        int one=0;
        for(int i=0;i<n;i++){
            if(s[i]=='0')zero++;
            else one++;
        }
        vector<vector<int>>dp(one+2,vector<int>(zero+2,-1));
        cout<<cal(one,zero,dp)<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}