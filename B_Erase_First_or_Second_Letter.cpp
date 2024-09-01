#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        string s;
        cin>>s;
        set<char>ss;
        int ans=0;
        for(int i=0;i<n;i++){
            ss.insert(s[i]);
            ans+=ss.size();

        }
        // int x=(n*(n+1))/2;
        // int y=n-ss.size();
        // y=(y*(y+1))/2;
        // cout<<x-y<<endl;
        cout<<ans<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}