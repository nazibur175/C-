#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,k;
        cin>>n>>k;
        int l= n - k + 1;
        int r=n;
        // l-1 porjonto
        int left = (l)/2;
        // r porjonto
        int all  = (r+1)/2;
        if((all-left) % 2==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}