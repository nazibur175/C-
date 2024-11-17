#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
int fact[109];
int dp[109][109];
int ncr(int n,int r){
    if(n==0 || r==0 || n==r){
        return 1;
    }
    if(dp[n][r]!=-1){
        return dp[n][r];
    }
    return dp[n][r]=ncr(n-1,r)+ncr(n-1,r-1);
}
void solve(){
    fact[0]=1;
    for(int i=1;i<=19;i++){
    fact[i]=fact[i-1]*i;
    }
    memset(dp,-1,sizeof dp);
    int t;
    cin>>t;
    for(int tt=1;tt<=t;tt++){
        int n,k;
        cin>>n>>k;
        cout<<"Case "<<tt<<": ";
        if(n<k){
            cout<<0<<endl;
            continue;
        }
        int ans=0;
        int ncrr = ncr(n,k);
        ans=ncrr*ncrr;
        ans*=fact[k];
        cout<<ans<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}