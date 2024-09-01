#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,x,k;
        cin>>n>>x>>k;
        int b=x%k;
        int g=(n-x)%k;
        int ans=max(b,g)-min(b,g);
        cout<<ans<<endl;
    }
}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}