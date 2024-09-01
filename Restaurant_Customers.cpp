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
        int s,e;
        cin>>s>>e;
        v.push_back({s,1});
        v.push_back({e,-1});
    }
    sort(v.begin(),v.end());
    int ans=0;
    int cur=0;
    for(int i=0;i<v.size();i++){
        cur+=v[i].second;
        ans=max(ans,cur);
    }
    cout<<ans<<endl;

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}