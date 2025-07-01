#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
int cal1(int n){
    int x=n;
    int y=n+1;
    if(x%2==0) x/=2;
    else y/=2;
    return (x%mod * (y%mod)) % mod;
}
int cal(int i, int j){
    return ((cal1(j) - cal1(i-1)) % mod + mod) % mod;
}
void solve(){
    int n;
    cin>>n;
    int ans=0;
     for(int i=1;i<=n;i=(n/(n/i))+1){
        int pre=i;
        int next=n/(n/i);
        int div=n/i;
        ans=(ans+(div%mod)*cal(pre,next)) % mod;
     }
    cout<<ans<<"\n";

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}