#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    int n;
    cin>>n;
    int a[n+1];
    for(int i=0;i<n;i++) cin>>a[i];
    int ans=0;

    for(int i=0;i<=60;i++){
        int cnt0=0;
        int cnt1=0;
        for(int j=0;j<n;j++){
            if(a[j]&(1LL<<i)){
                cnt1++;
            }
            else cnt0++;
        }
        ans= ans%mod + (((1LL<<i)%mod) * ((cnt0*cnt1)%mod))%mod;
    }
    cout<<ans%mod<<endl;
}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}