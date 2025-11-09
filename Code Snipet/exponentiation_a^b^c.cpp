#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   modd             1000000007
#define test int t; cin>>t; while(t--)
int bigmod(int a,int b,int mod){
    if(b==1) return a%mod;
    if(b%2==0){
        int x = bigmod(a,b/2,mod);
        return 1LL*x*x%mod;
    }
    else {
        int x=bigmod(a,b/2,mod);
        return (1LL*x*x)%mod*a%mod;
    }
}
void solve(){
    test{
        int a,b,c;
        cin>>a>>b>>c;

        if(b==0 && c==0){
            b=1;
        }
        else if(b==0){
            b=0;
        }
        else if(c==0){
            b=1;
        }
        else 
            b=bigmod(b,c,modd-1);
        if(a==0 && b==0)
            cout<<1<<endl;
        else if(a==0)
            cout<<0<<endl;
        else if(b==0)
            cout<<1<<endl;
        else {
        int ans =bigmod(a,b,modd);
        cout<<ans<<endl;
        }
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}