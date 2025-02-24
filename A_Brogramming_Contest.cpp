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
        ss.push_back(s[0]);
        for(int i=1;i<s.size();i++){
            if(ss.back()!=s[i]){
                ss.push_back(s[i]);
            }
        }
        int ans=0;
        int f=0;
        for(int i=0;i<ss.size();i++){
            if(f==0 && ss[i]-'0'==0){
                continue;
            }
            else{
                ans++;
                f=1-f;
            }
        }
        cout<<ans<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}