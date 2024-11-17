#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
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
    test{
        int n,d;
        cin>>n>>d;
        int a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        int sum = (d*(d+1))/2;
        sum%=mod;
        int dd= d*d;
        //cout<<sum<<" "<<dd<<endl;
        cout<<(sum*bigmod(dd,mod-2))%mod<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}