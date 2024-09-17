#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    int n,m;
    cin>>m>>n;
    double ans=0;
    for(int i=1;i<=m;i++){
        ans+= i*(pow(((i*1.0)/m),n) - pow(((i-1)*1.0)/m,n));
    }
    cout<<setprecision(12)<<fixed;
    cout<<ans<<endl;
}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}