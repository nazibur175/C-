#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
string s;
const int N=1e3;
int dp[N][N];
int cal(int l,int r){
    if(l>r) return 0;
    if(l==r) return 1;
    if(dp[l][r]!=-1) return dp[l][r];
    if(s[l]==s[r]){
        return dp[l][r]= cal(l+1,r-1)+2;
    }
    else {
        int one=cal(l+1,r);
        int two=cal(l,r-1);
        return dp[l][r]= max(one,two);
    }
}
void solve(){
    int n;
    cin>>n;
    cin>>s;
    memset(dp,-1,sizeof(dp));
    int ans=cal(0,n-1);
    cout<<ans<<endl;
}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}