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
    int n;
    cin>>n;
    vector<pair<int,int>>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i].first>>v[i].second;
    }
    int num_0f_div=1;
    for(int i=0;i<n;i++){
        num_0f_div*=(v[i].second+1);
        num_0f_div%=mod;
    }
    int sum_of_div=1;
    for(int i=0;i<n;i++){
        sum_of_div*=(bigmod(v[i].first,v[i].second+1)-1+mod)%mod;
        sum_of_div%=mod;
        sum_of_div*=bigmod(v[i].first-1,mod-2);
        sum_of_div%=mod;
    }
    int pro_of_div=1;
    int div_count = 1;
    for(int i=0;i<n;i++){
        //f(p) = bigmod(p,(n*(n+1))/2);
        // f(a*b) = f(a)^d(b) * f(b)^d(a);
        int fa = bigmod(v[i].first,(v[i].second*(v[i].second+1))/2);
        pro_of_div=(bigmod(fa,div_count)*bigmod(pro_of_div,(v[i].second+1)));
        pro_of_div%=mod;
        div_count= (div_count*(v[i].second+1))%(mod-1);
        
    }
    cout<<num_0f_div<<" "<<sum_of_div<<" "<<pro_of_div<<endl;

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}