#include<bits/stdc++.h>
using namespace std;
#define int long long 
int mod;
#define test int t; cin>>t; while(t--)
int bigmod(int a,int b){
    if(b==1) return a%mod;
    if(b%2==0){
        int x = bigmod(a,b/2);
        return 1LL*x*x%mod;
    }
    else {
        int x=bigmod(a,b/2);
        return (1LL*x*x)%mod*a%mod;
    }
}


void solve(){
    int a,b;
    cin>>a>>b>>mod;
    int ans= (a*(bigmod(b,mod-2)))%mod;
    cout<<ans<<endl;

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}