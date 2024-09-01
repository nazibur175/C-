#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
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
    test{
        int a,b;
        cin>>a>>b;
        if(a==0 && b==0)
            cout<<1<<endl;
        else if(a==0)
            cout<<0<<endl;
        else if(b==0)
            cout<<1<<endl;
        else {
        int ans =bigmod(a,b);
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