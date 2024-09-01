#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
#define pi 3.141592653589793238462643
void solve(){
    double d,h,v,e;
    cin>>d>>h>>v>>e;
    double ache = pi*(d/2.0)*(d/2.0)*h;
    double bare = pi*(d/2.0)*(d/2.0)*e;
    if(bare>=v) cout<<"NO"<<endl;
    else {
        double diff= v-bare;
        double ans = ache/diff;
        cout<<"YES"<<endl;
         cout<<fixed<< setprecision(10)<<ans<<endl;
    }
}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}