#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
int n,x,y;
int ok(int t){
    int c=0;
    if(x>y) swap(x,y);
    c= t/x;
    c+= (t-x)/y;
    if(c>=n) return 1;
    else return 0;
}
void solve(){
    //int n,x,y;
    cin>>n>>x>>y;
    int l=0;
    int r=1;
    while (!ok(r))
    {
        r*=2;
    }
    while (l<r)
    {
        int mid = l+(r-l)/2;
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