#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        string s;
        cin>>s;
        int ans=INT_MAX;
        int nonzero=0;
        for(int i=0;i<s.size();i++){
            int pore= s.size()-i-1;
            if(s[i]=='0') continue;
            else{
                ans = min(ans, nonzero+pore);
            }
            if(s[i]!='0') nonzero++;
        }
        cout<<ans<<"\n";
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}