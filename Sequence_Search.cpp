#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
int a,b,k;
int dp[1000];
int cal(int n){
    if(dp[n]!=-1) return dp[n];
    if(n==1) return 0;
    else if(n==2) return a;
    else if(n==3) return b;
    else 
        return dp[n] = cal(n-1)+cal(n-2)-cal(n-3);
}
void solve(){
    test{
        memset(dp,-1,sizeof(dp));
        cin>>a>>b>>k;
        set<int>s;
        for(int i=1;i<=100;i++){
            s.insert(cal(i));
        }
        for(auto x:s) cout<<x<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}