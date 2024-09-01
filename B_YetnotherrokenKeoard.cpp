#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        string s;
        cin>>s;
        int n=s.size();
        vector<char>ans;
        int cB=0;
        int cb=0;
        for(int i=n-1;i>=0;i--){
            if(s[i]=='B') cB++;
            else if(s[i]=='b') cb++;
            else {
                if(s[i]>='A' && s[i]<='Z' && cB) {
                    cB=max(0LL,cB-1);
                    continue;
                }
                else if(s[i]>='a' && s[i]<='z' && cb) {
                    cb=max(0LL,cb-1);
                    continue;
                }
                else ans.push_back(s[i]);
            }
        }
        reverse(ans.begin(),ans.end());
        for(auto x:ans) cout<<x;
        cout<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}