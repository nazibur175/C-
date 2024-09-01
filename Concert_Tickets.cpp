#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
   int n,m;
   cin>>n>>m;
   multiset<int>s;
   for(int i=0;i<n;i++){
     int x;
     cin>>x;
     s.insert(x);
   }
   for(int i=0;i<m;i++){
    int t;
    cin>>t;
    auto it = s.upper_bound(t);
    if(it==s.begin()) cout<<-1<<endl;
    else {
        cout<<*(--it)<<endl;
        s.erase(it);
    }
   }
   

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}