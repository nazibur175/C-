#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    sort(v.begin(),v.end());
    int q;
    cin>>q;
    while (q--)
    {
        int l,r;
        cin>>l>>r;
        int ans = (upper_bound(v.begin(),v.end(),r)-v.begin()) - (lower_bound(v.begin(),v.end(),l)-v.begin());
        cout<<ans<<" ";
    }
    

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}