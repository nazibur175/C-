#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
int h,w,n;
int ok(int nn){
    int x = nn/h;
    int y=nn/w;
    x*=y;
    if(x>=n) return 1;
    else return 0;
}
void solve(){
    cin>>h>>w>>n;
    int l=0;
    int r=1;
    while (!ok(r))
    {
        r*=2;
    }
    
    while (l<r)
    {
         int mid = (l+r)/2;
        if(ok(mid)){
            r=mid;
        }
        else l=mid+1;
    }
    cout<<r<<endl;
}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}