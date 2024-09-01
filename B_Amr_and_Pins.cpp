#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    int r,x1,y1,x2,y2;
    cin>>r>>x1>>y1>>x2>>y2;
    double distance = sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
    //cout<<"Dis ->"<<distance<<endl;
    int x=ceil((distance/(2*r)));
    cout<<x<<endl;
    // cout<<"X ->"<<x<<endl;
    // if(x) cout<<x-1<<endl;
    // else cout<<x<<endl;
    // cout<<ceil((distance)/r)<<endl;

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}