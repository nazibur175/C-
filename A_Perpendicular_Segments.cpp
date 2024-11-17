#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int x,y,k;
        cin>>x>>y>>k;
        x=min(x,y);
        y=x;
        cout<<"0 0 "<<x<<" "<<y<<endl;
        //cout<<"0 0 0 "<<y<<endl;
        cout<<x<<" 0 0 "<<y<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}