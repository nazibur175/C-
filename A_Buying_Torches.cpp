#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int x,y,k;
        cin>>x>>y>>k;
        int temp = (k*y)+k-1;
        int ans = (temp+x-2)/(x-1);
        cout<<ans+k<<"\n";
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}