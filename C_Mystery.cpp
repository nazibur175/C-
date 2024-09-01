#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    int n,a,b;
    cin>>n>>a>>b;
    set<pair<int,int>>s;
    map<pair<int,int>,int>m;
    for(int i=1;i<=n;i++){
        int x,y;
        cin>>x>>y;
        if(a<x && b<y) s.insert({x,y});
        m[{x,y}]=i;
    }
    vector<pair<int,int>>v;
    for(auto x:s){
        v.push_back({x.first,x.second});
    }
    int f=1;
    if(s.size()==0){
        cout<<0<<endl;
        f=0;
    }
    else {
    vector<pair<int,int>>ans;
    ans.push_back({v[0].first,v[0].second});
     for(int i=1;i<v.size();i++){
        if(v[i].first>ans[ans.size()-1].first  && v[i].second> ans[ans.size()-1].second){
            ans.push_back({v[i].first,v[i].second});
        }
     }
     cout<<ans.size()<<endl;
     for(auto x:ans){
        cout<<m[{x.first,x.second}]<<" ";
     }
     cout<<endl;
    }




}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}