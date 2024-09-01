#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    int n;
    cin>>n;
    int x0=0;
    int x1=0;
    int y0=0;
    int y1=0;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        if(x==0) x0++;
        else x1++;
        if(y==0) y0++;
        else y1++;
    }
    cout<<min(x0,x1) + min( y0,y1)<<endl;

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}