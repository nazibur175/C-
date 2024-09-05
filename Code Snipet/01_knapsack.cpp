
#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int N=1e5+5;
int dp[105][N];
void solve(){
    int n,w;
    cin>>n>>w;
    int weight[n+1];
    int value[n+1];

    for(int i=1;i<=n;i++){
        cin>>weight[i]>>value[i];
    }
    // i = position
    // j = weight
    for(int i=0;i<=n;i++){
        for(int j=0;j<=w;j++){
            if(i==0 || j==0){
                dp[i][j]=0;
            }
            else if(weight[i]>j){
                dp[i][j]=dp[i-1][j];
            }
            else {
                dp[i][j]=max(dp[i-1][j],dp[i-1][j-weight[i]]+value[i]);
            }
        }
    }
    cout<<dp[n][w]<<endl;


}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}
