#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        int sq=sqrtl(n);
        int ans=4*sq;
        n-=sq*sq;
        if(n>sq) ans+=4;
        else if(n!=0) ans+=2;
        
        cout<<ans<<endl;
    }
    

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}