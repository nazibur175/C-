#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
      int n;
      cin>>n;
      vector <int>v(n);
      for(int i=0;i<n;i++)
        cin>>v[i];

      int diff=0;
      for(int i=1;i<n;i++)
      {
          if(v[i]<v[i-1])
          {
             diff=max(diff,v[i-1]-v[i]);
             v[i]=v[i-1];
          }
      }
      int cnt=0;
      while(diff)
      {
          diff/=2;
          cnt++;
      }
      cout<<cnt<<"\n";
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}