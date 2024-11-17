#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int inf=1e18;
void solve(){
    test{
        int x,y;
        cin>>x>>y;
         int ans=inf;
         int gc=1;
         while ((gc*gc)<=y)
         {
            int l= (x-1)/gc;
            l++;
            if(gc*(l+1)<=y)
            ans = min(ans, gc*l*(l+1));
            if((gc+1)*l<=y)
            ans = min(ans, l*gc*(gc+1));
            gc++;
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