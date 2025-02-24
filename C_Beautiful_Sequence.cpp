#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             998244353
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
        int n;
        cin>>n;
        int a[n+1];
        for(int i=1;i<=n;i++) cin>>a[i];
        int cnt3=0;
        int pre2[n+1]={0};
        int pre2pj[n+1]={0};
        for(int i=1;i<=n;i++){
            if(a[i]==3) cnt3++;
            pre2[i]=pre2[i-1]+(a[i]==2);
        }
        for(int i=1;i<=n;i++){
            pre2pj[i]=pre2pj[i-1]+(a[i]==3)*bigmod(2,pre2[i]);
            pre2pj[i]%=mod;
        }
        int ans=0;
        for(int i=1;i<=n;i++){
            if(a[i]==1){
                int sum2pj= (pre2pj[n]-pre2pj[i-1]+mod)%mod;
                int div = bigmod(2,pre2[i]);
                int temp = sum2pj * bigmod(div,mod-2);
                ans= ans + temp -cnt3;
                ans = (ans+mod)%mod;
            }
            else if(a[i]==3) cnt3--;
        }
        cout<<ans%mod<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}