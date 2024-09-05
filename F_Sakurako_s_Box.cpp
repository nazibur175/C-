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
        int n;
        cin>>n;
        int a[n+2];
        for(int i=1;i<=n;i++) cin>>a[i];
        int pre[n+1]={0};
        for(int i=1;i<=n;i++){
            pre[i]=pre[i-1]+a[i];
        }
        int total = 0;
        for(int i=1;i<=n;i++){
            int sum = (pre[n]-pre[i])%mod;
            //total += (a[i]*sum);
            total =( total%mod + ( a[i]*sum)%mod)%mod;
        }
        int xx = (n*(n-1))/2;
        xx = xx%mod;
        xx = bigmod(xx,mod-2);
        int ans =  (total*xx)%mod;
        cout<<ans<<endl;
        
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}