#include <iostream>
#include <vector>
#include <set>
#include <cmath>
using namespace std;
#define ll long long 
#define   mod             1000000007
set<ll> primeFactors(ll n) {
    set<ll> factors;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            factors.insert(i);
            while (n % i == 0) n /= i;
        }
    }
    if (n > 1) factors.insert(n);
    return factors;
}
int popcount(int x) {
    int cnt = 0;
    while (x) {
        cnt+=x&1; 
        x >>= 1;
    }
    return cnt;
}

void solve(){
    int t;
    cin>>t;
    for(int tt=1;tt<=t;tt++){
        ll a,b,n;
        cin>>a>>b>>n;
        set<ll>s = primeFactors(n);
        vector<ll>v;
        for(auto x:s)v.push_back(x);
        int nn=v.size();
        ll ans= b-a+1;
        for(int mask=1;mask<(1<<nn);mask++){
            ll lcm=1;
            for(int i=0;i<nn;i++){
                if(mask &(1<<i)){
                    if(lcm>b/v[i]){
                        lcm=b+1;
                        break;
                    }
                    lcm*=v[i];
                }
            }
            if(lcm<=b){
                ll cnt = (b/lcm) - ((a-1)/lcm) ;
                if(popcount(mask)%2){
                    ans-=cnt;
                }
                else ans+=cnt;
            }
        }
        cout<<"Case #"<<tt<<": ";
        cout<<ans<<endl;
    }

}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}