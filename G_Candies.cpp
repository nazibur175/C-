#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
int dp[105][100005];
vector<int>pre(100009,1);
void solve(){
    int n,k;
    cin>>n>>k;
    vector<int> a(n+2,0);
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    memset(dp,0,sizeof(dp));
    for(int i=n;i>=1;i--){
        for(int kk=0;kk<=k;kk++){
            int left=kk-min(kk,a[i]);
            int right=kk;
            
            // for(int l=0;l<=min(kk,a[i]);l++){
            //     dp[i][kk]+=dp[i+1][kk-l];
            //     //dp[i][kk]%=mod;
            // }

            dp[i][kk]=pre[right]- ((left-1)>=0? pre[left-1]:0) + mod;
            dp[i][kk]%=mod;
        }
        int sum=0;
        for(int j=0;j<=k;j++){
            sum+=dp[i][j];
            sum%=mod;
            pre[j]=sum;
        }
    }
    // for(int i=n;i>=1;i--){
    //     for(int j=0;j<=k;j++){
    //         cout<<dp[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    cout<<dp[1][k]<<endl;
    

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}