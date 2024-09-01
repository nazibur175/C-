#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             998244353
#define test int t; cin>>t; while(t--)
void solve(){
    int n;
    cin>>n;
    int ans=1;
    for(int i=1;i<=n;i++){
        ans=(ans*i) %mod;
    }
    cout<<ans<<endl;

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}