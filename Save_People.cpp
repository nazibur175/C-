#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,m;
        cin>>n>>m;

        int x,y;
        cin>>x>>y;
        int col=min(y,(m-y+1));
        int row=min(x,(n-x+1));
        // cout<<row<<" "<<col<<endl;
        int ans = min(col*n,row*m);
        cout<<(n*m)-ans<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}