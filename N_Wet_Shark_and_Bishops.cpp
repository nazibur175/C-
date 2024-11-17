#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
int a[1000+9][1000+9];
void solve(){
   int n;
   cin>>n;
   map<int,int> m1,m2;
   for(int i=0;i<n;i++){
       int x,y;
       cin>>x>>y;
       m1[x+y]++;
       m2[x+(1000-y)]++;
   }
   int ans=0;
  
    for(auto i:m1){
         ans+=(i.second*(i.second-1))/2;
    }
    for(auto i:m2){
         ans+=(i.second*(i.second-1))/2;
    }
    cout<<ans<<endl;

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}