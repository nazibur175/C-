#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    int x=1,y=3,z=2;
    tuple<int,int,int> t=make_tuple(x,y,z);
    cout<<get<0>(t)<<" "<<get<1>(t)<<" "<<get<2>(t)<<endl;
    get<0>(t)=100;
    cout<<get<0>(t)<<endl;
    cout<<sizeof(t)/sizeof(int)<<endl; // 24/8=3
    auto [a,b,c]=t;
    cout<<a<<" "<<b<<" "<<c<<endl; // 100 3 2


}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}