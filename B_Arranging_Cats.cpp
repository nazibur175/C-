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
        string ss;
        cin>>ss;
        int c0=0;
        int c1=0;
        for(int i=0;i<n;i++){
            if(s[i]==ss[i]) continue;
            else if(s[i]=='0') c0++;
            else c1++;
        }
        int ans=min(c0,c1) + abs(c0-c1);
        cout<<ans<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}