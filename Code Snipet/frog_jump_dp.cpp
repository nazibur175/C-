#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    int n;
    cin>>n;

    int mov1,mov2;
    cin>>mov1>>mov2;
    
    // int a[n];
    int dp[n+9]={0};
    dp[n]=1;
    for(int i=n-1;i>=1;i--){
        if(dp[i+mov1] || dp[i+mov2]){
            dp[i]=1;
        }
    }
    if(dp[1]==1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}
