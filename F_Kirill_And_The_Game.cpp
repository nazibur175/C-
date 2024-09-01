#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    int l,r,x,y,k;
    cin>>l>>r>>x>>y>>k;
    int f=0;
    for(int i=x;i<=y;i++){
        int val = k*i;
        if(val>=l && val<=r){
            f=1;
            break;
        }
    }
    if(f) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}