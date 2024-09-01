#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    int n;
    cin>>n;
    int mv;
    cin>>mv;
    int move[mv];
    int maxMove=0;
    for(int i=0;i<mv;i++) {
        cin>>move[i];
        maxMove=max(maxMove,move[i]);
    }
    int dp[n+maxMove+1]={0};
    dp[n]=1;
    for(int i=n-1;i>=1;i--){
        for(int j=0;j<mv;j++){
            dp[i]|=dp[i+move[j]];
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