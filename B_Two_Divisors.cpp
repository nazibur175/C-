#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
       int a,b;
       cin>>a>>b;
       int x=lcm(a,b);
       if(x==b) 
        cout<<x*(b/a)<<endl;
       else 
        cout<<x<<endl;
    }
}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}