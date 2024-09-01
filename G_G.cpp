#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
int lcm(int a,int b){
    return(a*b)/gcd(a,b);
}
int inf=1e5;
void solve(){
    vector<int>a{1,3,6,10,15};
    vector<int>dp(16000+9,inf);
    for(auto x:a){
        dp[x]=1;
    }
    for(int i=1;i<=1600;i++){
        for(auto x:a){
            dp[i+x]=min(dp[i+x],dp[i]+1);
        }
    }
    //for(int i=0;i<=30;i++) cout<<dp[i]<<endl;
    test{
        int n;
        cin>>n;
        int ans = (n/1500)*100;
        n=n%1500;
        ans+=dp[n];
        cout<<ans<<endl;
        //cout<<1<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}