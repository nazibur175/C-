#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
  test{
    long double n;
    cin>>n;
    if(n<0){
      cout<<"invalid"<<endl;
    }
    else {
    long double ans = sqrtl(n);
    cout<<ans<<endl;
    }
  }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}