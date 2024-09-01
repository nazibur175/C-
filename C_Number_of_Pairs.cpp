#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
 test{
    int n,l,r;
    cin>>n>>l>>r;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int ans=0;
    // for(auto x: v){
    //     cout<<x<<" ";
    // }
    // cout<<endl;
    for(int i=0;i<n;i++){
        int x= lower_bound(v.begin(),v.end(),l-v[i])-v.begin();
        int y= upper_bound(v.begin(),v.end(),r-v[i])-v.begin()-1;
        //cout<<x<<" ---- "<<y<<endl;
        ans+=y-x+1;
        if(2*v[i]>=l && 2*v[i]<=r) ans--;
    }
    cout<<ans/2<<endl;
 }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}