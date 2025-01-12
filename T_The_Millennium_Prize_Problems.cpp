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
const int N=1e5+9;
int freq[N];
int final[N];
void solve(){
test{
    int n;
    cin>>n;
    int a[n+1];
    int mx=0;
    for(int i=0;i<n;i++) {
        cin>>a[i];
        mx=max(a[i],mx);
    }
    for(int i=0;i<=mx;i++){
        final[i]=0;
        freq[i]=0;
    }
    for(int i=0;i<n;i++) freq[a[i]]++;
    int ans=0;
    for(int i=mx;i>=1;i--){
        int sum =freq[i]*i%mod;
        sum%=mod;
        for(int j=2*i;j<=mx;j+=i){
            sum =(sum+freq[j]*j%mod)%mod;
            final[i] = (final[i]-final[j]+mod)%mod;
        }
        final[i] += ((sum%mod)*(sum%mod))%mod;
        ans += final[i] * bigmod(i,mod-2);
        ans%=mod;
    }
    cout<<ans<<endl;
    }
    
}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
freopen("lcm.in", "r", stdin);
//freopen("angle1.out", "w", stdout);
solve();

}