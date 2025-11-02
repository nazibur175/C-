#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int N=1e4;
int a[N];
int n;
int target_sum;
int dp[N][N];
int cal(int pos,int cur_sum){
    if(cur_sum>target_sum) return 0;
    if(pos==n){
        if(cur_sum==target_sum) return 1;
        else return 0;
    }
    if(dp[pos][cur_sum]!=-1){
        return dp[pos][cur_sum];
    }

    int ans=0;
    ans += cal(pos+1,cur_sum+a[pos]);
    ans += cal(pos+1, cur_sum);
    return dp[pos][cur_sum]=ans;
    // return ans;
}

void solve(){
        cin>>n;
        for(int i=0;i<n;i++) cin>>a[i];
        memset(dp,-1,sizeof(dp));
        cout<<cal(0,0)<<endl;

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}