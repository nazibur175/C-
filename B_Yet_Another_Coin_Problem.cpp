#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
int lcm(int a,int b){
    return(a*b)/gcd(a,b);
}
int inf=1e8;
void solve(){
    vector<int>a{1,3,6,10,15};
    vector<int>dp(1600+100,inf);
    for(auto x:a){
        dp[x]=1;
    }
    dp[0]=0;
    for(int i=1;i<=1600;i++){
        for(auto x:a){
            dp[i+x]=min(dp[i+x],dp[i]+1);
        }
    }
    test{
        int n;
        cin>>n;
        int x=(n/15);
        int ans=x+dp[n%15];
        ans=min(ans,(x-1)+dp[n%15+15]);
        if(n<100) ans=dp[n];
        cout<<ans<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}