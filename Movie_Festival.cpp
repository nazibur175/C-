#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    int n;
    cin>>n;
    vector<pair<int,int>>v;
    for(int i=1;i<=n;i++){
        int x, y;
        cin>>x>>y;
        v.push_back({x,y});
    }
    sort(v.begin(),v.end());
    int ans=1;
    int cur=v[0].second;
    for(int i=1;i<n;i++){
        if(v[i].second<cur){
            cur=v[i].second;
        }
        else if(v[i].first>=cur){
            ans++;
            cur=v[i].second;
        }
    }
    cout<<ans<<endl;

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}