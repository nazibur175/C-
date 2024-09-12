#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int x,y,k;
        cin>>x>>y>>k;
        double a = ceill(x/(k*1.0));
        double aa = ceill(y/(k*1.0));
        int xx=a;
        int yy=aa;
        //cout<<xx<<" "<<yy<<endl;
        int ans = 2*(max(xx,yy));
        int move = max(xx,yy);
        if(((move-1) * k)>=y) ans--;
    
        cout<<ans<<endl; 
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}