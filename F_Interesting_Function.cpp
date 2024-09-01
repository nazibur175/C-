#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int l,r;
        cin>>l>>r;
        int ans=0;
        while (l!=0 || r!=0)        
        {
          ans+=r-l;
          r/=10;
          l/=10;
        }
        cout<<ans<<endl;
        
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}