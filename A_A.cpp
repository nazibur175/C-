#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
      string s;
      cin>>s;
      int n=s.size();
      int f=0;
      for(int i=0;i<n;i++){
            if(s[i]=='7'){
                  f=1;
                  break;
            }
      }
      if(f) cout<<"Yes"<<endl;
      else cout<<"No"<<endl;

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}