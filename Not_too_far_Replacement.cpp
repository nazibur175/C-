#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
 test{
    int n;
    cin>>n;
    vector<int>v(n+1);
    int sum=0;
    for(int i=0;i<=n;i++){
        cin>>v[i];
        sum+=v[i];
    }
    int ans=2*v[n];
    sort(v.begin(),v.end()-1);
    
    for(int i=0;i<n;i++){
        if(v[i]<=ans && v[i]*2>ans){
            ans=v[i]*2;
            //cout<<ans<<endl;
        }
    }
    cout<<sum-ans/2<<endl;
 }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}