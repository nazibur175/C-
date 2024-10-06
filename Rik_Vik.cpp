#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int N=1e6;
int fac[N+1];
int bigmod(int a, int b) {
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
    fac[1]=1;
    for(int i=2;i<=N;i++){
            fac[i]=(fac[i-1]*i)%mod;
    }
    int s,n,m,k,ans;
    test{
         s,n,m;
         cin>>s>>n>>m;
         k = s/n;

         ans=fac[s];
        // pow(fac[n], m-k);

        ans = ans*bigmod(fac[n],m-k)%mod;
        cout<<ans<<endl;

    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}