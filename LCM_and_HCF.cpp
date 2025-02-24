#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
int gc(int x,int y){
    if(y==0) return x;
    return gc(y, x%y);
}

void solve(){
    test{
        int x,y;
        cin>>x>>y;
        int hcf= gc(x,y);
        int lc = (x*y)/hcf;
        cout<<lc<<" "<<hcf<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}