#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             998244353
#define test int t; cin>>t; while(t--)
const int N=2e5+9;
const int mx=1e6+9;
int freq[mx];
int final[mx];
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
    int n;
    cin>>n;
    int a[n];
    int mxx=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        mxx=max(mxx,a[i]);
        freq[a[i]]++;
    }
    int ans=0;
    for(int i=mxx;i>=1;i--){
        int sum=(freq[i]*i)%mod;
        int sqsum= (freq[i]*i*i)%mod;
        for(int j=i*2;j<=mxx;j+=i){
            sum= (sum + (freq[j]*j))%mod;
            sqsum= (sqsum + (freq[j]*j*j))%mod;
            final[i] = (final[i] -final[j] + mod )%mod;
        }
        int temp = (sum*sum - sqsum + mod)%mod;
        temp = (temp * bigmod(2,mod-2))%mod;
        final[i] = (final[i] + temp)%mod;
        ans= (ans + final[i]*bigmod(i,mod-2))%mod;
    }
    
    cout<<ans<<endl;

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}