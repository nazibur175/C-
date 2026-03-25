#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int N = 1e2 + 9;
int a[N];
int n;
int dp[N][N];
int cal(int pos,int possible){
    if(pos>n) return 0;
    possible++;
    if(dp[pos][possible]!=-1) return dp[pos][possible];
    int ans=0;
    for(int i=0;i<=min(2ll,possible);i++){
        ans = max(ans, cal(pos+1,possible-i)+a[pos]*i);
    }
    return dp[pos][possible]=ans;
}
void solve(){
    test{
        cin>>n;
        for(int i=1;i<=n;i++) 
            cin>>a[i];
        memset(dp,-1,sizeof(dp));
        int ans = cal(1,0);
        cout<<ans<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}