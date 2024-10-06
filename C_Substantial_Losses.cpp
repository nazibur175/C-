#include<bits/stdc++.h>
using namespace std;
#define int long long
const int mod = 998244353;

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("metaa.in", "r", stdin);
    freopen("metaa.out", "w", stdout);
    int t;
    cin>>t;
    for(int tc=1; tc<=t; tc++){
        int w,g,l;
        cin>>w>>g>>l;
        int ans;
        if(l==0){
            ans=(w-g)%mod;
            if(ans < 0) ans += mod;
        }
        else{
            int a=(w-g)%mod;
            if(a<0) 
                a+=mod;
            int b=(2*(l% mod))%mod;
            b=(b+1)%mod;
            ans =(a*b)% mod;
        }
        cout << "Case #"<<tc<<": ";
        cout<<ans<<endl;
    }
}
