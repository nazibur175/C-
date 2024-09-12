#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,m;
        cin>>n>>m;
        int ans=0;
        if(m==1) ans=0;
        else ans=1;
        if(n%2==0) ans= ans^ans;
        if(ans==0) cout<<2<<endl;
        else cout<<1<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}