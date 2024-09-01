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
        int x;
        cin>>x;
        v.push_back({x,i});
    }
    sort(v.begin(),v.end());
    int ans=1;
    for(int i=0;i<n-1;i++){
        if(v[i].second>v[i+1].second) ans++;
    }
    cout<<ans<<endl;
}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}