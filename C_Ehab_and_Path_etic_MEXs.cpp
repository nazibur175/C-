#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
vector<int>edge[200005];
void solve(){
   int n;
   cin>>n;
   vector<pair<int,int>>vec;
   for(int i=0;i<n-1;i++){
       int u,v;
       cin>>u>>v;
       edge[u].push_back(v);
       edge[v].push_back(u);
       vec.push_back({u,v});

   }
      int f=0;
      int temp=0;
      map<pair<int,int>,int>m;
      for(int i=1;i<=n;i++){
         if(edge[i].size()>2){
                 f=i;
                 for(int j=0;j<edge[i].size();j++){
                        m[{edge[i][j],i}]=temp;
                        m[{i,edge[i][j]}]=temp;
                        temp++;
                     }
                     break;
                 }
        }
    for(auto x:vec){
    if(x.first==f || x.second==f){
        cout<<m[{x.first,x.second}]<<endl;
    }
    else cout<<temp++<<endl;
   }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}