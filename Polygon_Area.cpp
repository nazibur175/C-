#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    int n;
    cin>>n;
    vector<pair<int , int>>v;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        v.push_back({x,y});
    }
    int ans =0;
    for(int i=0;i<n;i++){
        int x1=v[i].first;
        int y1=v[i].second;
        int x2=v[(i+1)%n].first;
        int y2=v[(i+1)%n].second;
        ans += (x1*y2 - x2*y1);
    }
    cout<<abs(ans)<<endl;

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}