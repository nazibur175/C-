#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
      int n;
      cin>>n;
      int a[n];
      for(int i=0;i<n;i++) cin>>a[i];
      map<int,int>m;
      // m[1]=1;
      // m[2]=1;
      // m[3]=1;
      // m[5]=2;

      for(int i=0;i<n;i++){
            m[a[i]]++;
      }
      cout<<m[5]<<endl;

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}