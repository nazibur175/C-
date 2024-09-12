#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int N=2e5+9;
int dp[N+1];
int pre[N+1];
void solve(){
    dp[1]=1;
    dp[2]=1;
    dp[3]=2;
    for(int i=4;i<=N;i++){
        dp[i]=dp[i/3]+1;
    }
    for(int i=1;i<=N;i++){
        pre[i]=pre[i-1]+dp[i];
    }
    test{
        int l,r;
        cin>>l>>r;
        int ans = pre[r]- pre[l] + 2*dp[l];
        cout<<ans<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}