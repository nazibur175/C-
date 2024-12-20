#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
int n,x;
const int N=1e5+9;
int w[100+9];
int v[100+9];
int dp[109][N];
int knapsack(int i,int weight){
    if(i==n) return 0;
    int &ans=dp[i][weight];
    if(~ans) return ans;
    ans=knapsack(i+1,weight);
    if(weight+ w[i]<=x){
        ans=max(ans,knapsack(i+1,weight+w[i])+v[i]);
    } 
    return ans;
}
void solve(){
    cin>>n>>x;
    for(int i=0;i<n;i++){
        cin>>w[i]>>v[i];
    }
    memset(dp,-1,sizeof(dp));
    cout<<knapsack(0,0)<<endl;



}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}