#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   modd             1000000007
#define test int t; cin>>t; while(t--)
int bigmod(int a, int b,int mod) {
    int res = 1;
    while (b > 0) {
        if (b % 2 == 1) {
            res = (res * a) % mod;
        }
        a = (a * a) % mod;
        b /= 2;
    }
    return res;
}
void solve(){
    test{
        int a,b,c;
        cin>>a>>b>>c;
        b=bigmod(b,c,modd-1);
        int ans =bigmod(a,b,modd);
        cout<<ans<<endl;
    }
 
}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();
 
}