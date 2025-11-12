#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    int n;
    cin>>n;
    int ans=0;
    for(int i=0;i<n;i++){
        int x,y,z;
        cin>>x>>y>>z;
        vector<int>v;
        v.push_back(abs(x));
        v.push_back(abs(y));
        v.push_back(abs(z));
        v.push_back(abs(x+y));
        //v.push_back(abs(x+z));
        v.push_back(abs(y+z));
        v.push_back(abs(x+y+z));

        sort(v.begin(),v.end());
        cout<<v.back()<<endl;
        ans+=v.back();
    }
    cout<<ans<<endl;

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}