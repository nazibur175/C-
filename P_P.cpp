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
int cal(int a,int r,int n){
    int lob = ((a%mod)*(bigmod(r,n)-1))%mod;
    int hor = r-1;
    return ((lob%mod)*(bigmod(hor,mod-2))%mod)%mod;
}
void solve(){
    int q;
    cin>>q;
    while (q--)
    {
       int i,ii,j,jj;
       cin>>i>>ii>>j>>jj;
       int col = jj-j+1;
       int row = ii-i+1;
       int a= ((bigmod(2,i)%mod)*(bigmod(3,j)%mod))%mod;
       int ans= cal(a,3,col)%mod;
       ans = cal(ans,2,row)%mod;
       cout<<ans%mod<<endl;
    }
    

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}