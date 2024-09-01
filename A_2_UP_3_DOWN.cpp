#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    int x,y;
    cin>>x>>y;
    int ans=y-x;
    if(ans<=0 && ans>=-3) cout<<"Yes"<<endl;
    else if(ans>=0 && ans<=2) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}