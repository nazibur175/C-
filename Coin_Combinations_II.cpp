#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int N=1e7;
int a[N];
int dp[N];
int n,x;
int unique(int tk){
    dp[0]=1;
    for(int i=0;i<n;i++){
        for(int j=1;j<=x;j++){
            if(j-a[i]>=0){
                dp[j]+=dp[j-a[i]];
                dp[j]=dp[j]%mod;
            }
        }
    }
    return dp[x];
    
}
void solve(){
    cin>>n>>x;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    //memset(dp,-1,sizeof(dp));
    cout<<unique(x)<<endl;
    
 
}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();
 
}
