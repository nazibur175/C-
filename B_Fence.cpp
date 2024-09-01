#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    int n,k;
    cin>>n>>k;
    int a[n+9];
    for(int i=1;i<=n;i++) cin>>a[i];
    int dp[n+1]={0};
    dp[1]=a[1];
    for(int i=2;i<=n;i++){
        dp[i]=dp[i-1]+a[i];
    }
    int mi=1e9;
    int in=0;
    for(int i=k;i<=n;i++){
        if((dp[i]-dp[i-k])<mi){
            mi= dp[i]-dp[i-k];
            in=i-k+1;
        }
    }
    cout<<in<<endl;

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}