#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    int n;
    cin>>n;
    vector<pair<int,int>>v;
    map<pair<int,int>,int>inp;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        v.push_back({x,y});
        inp[{x,y}]++;
    } 
    map<pair<int,int>,pair<int,int>>nearest;
    vector<pair<int,int>>dir={{1,0},{-1,0},{0,1},{0,-1}};
    queue<pair<int,int>>q;
    for(auto x:v){
         for(auto y:dir){
            int nx=x.first+y.first;
            int ny=x.second+y.second;
            if(inp.find({nx,ny})==inp.end()){
                nearest[x]={nx,ny};
                q.push(x);
                break;
            }
        }
    }
    while(!q.empty()){
        pair<int,int>curr=q.front();
        q.pop();
         for(auto t:dir){
             int nx=curr.first+t.first;
             int ny=curr.second+t.second;
             if(inp.count({nx,ny}) && nearest.find({nx,ny})==nearest.end()){
                 nearest[{nx,ny}]=nearest[curr];
                 q.push({nx,ny});
             }
         }
     }
    for(auto x:v){
        cout<<nearest[x].first<<" "<<nearest[x].second<<"\n";
    }


}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}