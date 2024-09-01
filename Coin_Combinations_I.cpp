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
    if(tk==0) return 1;
    if(dp[tk]!=-1) return dp[tk];
    int c=0;
    for(int i=0;i<n;i++){
        if(tk-a[i]>=0)
        c+=unique(tk-a[i]);
        c=c%mod;
    }
    return dp[tk]=c;
    
}
void solve(){
    cin>>n>>x;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    memset(dp,-1,sizeof(dp));
    cout<<unique(x)<<endl;
    

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}