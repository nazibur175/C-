#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    int n;
    cin>>n;
    vector<pair<int,int>>v;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        v.push_back({x,y});
    }
        sort(v.begin(),v.end());
        int ans=0;
        for(int i=0;i<n;i++){
            if(v[i].first>=ans && v[i].second>=ans){
                ans=min(v[i].first,v[i].second);
            }
            else ans=max(v[i].first,v[i].second);
        }
        cout<<ans<<endl;

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}