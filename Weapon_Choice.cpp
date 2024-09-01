#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
    int h,x,y1,y2,k;
    cin>>h>>x>>y1>>y2>>k;
    int one = ceil(h/(x*1.0));
    int twok = y1*k;
    int two=0;
    if(twok>=h){
        two = ceil(h/(y1*1.0));
    }
    else {
        int extra = h - twok;
        two = k + ceil((extra/(y2*1.0)));
    }
    cout<<min(one,two)<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}