#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
  test{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
      cin>>a[i];
    }
    int c=0;
    for(int i=0;i<n;i++)
    {
      if(a[i]==0) c++;
    }
  // cout<<c<<endl;
    int ans=0;
    for(int i=n-c;i<n;i++){
      if(a[i]!=0) ans++;
      // cout<<i<<endl;
    }
    cout<<ans<<endl;
    
  }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}