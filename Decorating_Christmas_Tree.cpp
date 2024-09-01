#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,x,y;
        cin>>n>>x>>y;
        int a= min(y/3,x);
        int b= max(0LL, x-a);
        b= b/2;
        a=a+b;
        if(a>=n) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}