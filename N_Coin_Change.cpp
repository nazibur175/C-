#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define endl '\n'
vector<int>v{1,5,10,25,50};
int price;
const int N=8000;
int dp[5][N];
int cal(int n,int in){
    if(n==0) return 1;
    if(n<0 || in>4) return 0;
    if(dp[in][n]!=-1) return dp[in][n];
    return dp[in][n] = cal(n-v[in], in)+cal(n, in+1);
}
void solve(){
    memset(dp,-1,sizeof(dp));
    while (cin>>price)
    {
        int ans= cal(price,0);
        cout<<ans<<endl;
    }
}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}