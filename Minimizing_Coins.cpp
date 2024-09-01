#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
int n,x;
const int N= 1e6+9;
int a[1000];
int dp[N];
void solve(){
    cin>>n>>x;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    //memset(dp,-1,sizeof(dp));
    //dp[0]=0;
    for(int i=1;i<=x;i++){
        dp[i]=N;
        for(int j=1;j<=n;j++){
            if(i-a[j]>=0){
                dp[i]=min(dp[i],dp[i-a[j]]+1);
            }
        }
    }
    if(dp[x]==N)
        cout<<-1<<endl;
    else 
        cout<<dp[x]<<endl;
   

    

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}