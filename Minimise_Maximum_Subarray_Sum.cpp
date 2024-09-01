#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int x,y;
        cin>>x>>y;
        if(y>=x) cout<<1<<endl;
        else {
            int a= ceil(x/((y+1)*1.0));
            int b=x+(y*-2);
            cout<<max(a,b)<<endl;
        }
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}