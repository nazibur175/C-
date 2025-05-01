#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define test int t; cin>>t; while(t--)
const int MAX = 2e5 + 5;
const int MOD = 998244353;

long long fact[MAX], invFact[MAX];
long long modPow(long long base, long long exp, long long mod) {
    long long result = 1;
    base %= mod;
    while (exp > 0) {
        if (exp & 1) result = (result * base) % mod;
        base = (base * base) % mod;
        exp >>= 1;
    }
    return result;
}

void precompute() {
    fact[0] = invFact[0] = 1;
    for (int i = 1; i < MAX; ++i) {
        fact[i] = (fact[i - 1] * i) % MOD;
    }
    invFact[MAX - 1] = modPow(fact[MAX - 1], MOD - 2, MOD);
    for (int i = MAX - 2; i >= 1; --i) {
        invFact[i] = (invFact[i + 1] * (i + 1)) % MOD;
    }
}

long long nPr(int n, int r) {
    if (r > n) return 0;
    return (fact[n] * invFact[n - r]) % MOD;
}

void solve(){
    precompute();
    test{
        int n;
        cin>>n;
        int a[n];
        map<int,int> m;
        for(int i=0;i<n;i++){
            cin>>a[i];
            m[a[i]]++;
        }
        int l=0;
        int r=n-1;
        int ans=1;
        while(l<=r){
            int cnt=0;
            int temp=0;
            if(l==r){
                cnt=m[l];
                ans = (ans*cnt)%MOD;
            }
            else{
                cnt=m[l]+m[r];
                ans = (ans*nPr(cnt,2))%MOD;
            }
            l++;
            r--;
        }
        
        cout<<ans<<"\n";
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}