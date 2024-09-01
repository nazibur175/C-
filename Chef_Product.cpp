#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        int val = sqrtl(n);
        //cout<<val<<endl;
        int even = val/2;
        int odd = (val+1)/2;
        if(n%2==0) cout<<even<<endl;
        else cout<<odd<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}