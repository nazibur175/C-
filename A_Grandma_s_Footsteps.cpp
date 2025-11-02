#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    int s,a,b,x;
    cin>>s>>a>>b>>x;
    int mul = (x/(a+b));
    int ex= x%(a+b);
    int ans= mul*a*s;
    if(ex>=a) ans += a*s;
    else {
        ans+=ex*s;
    }
    cout<<ans<<endl;

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}