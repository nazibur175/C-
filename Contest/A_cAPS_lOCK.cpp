#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    string s;
    cin>>s;
    int flag=1;
    for(int i=1;i<s.size();i++){
        if(s[i]>='a' && s[i]<='z')
            flag=0;
    }

    if(flag==0)
        cout<<s<<endl;
    else {
        string ans;
        for(int i=0;i<s.size();i++){
             if(s[i]>='a' && s[i]<='z')
                ans.push_back(s[i]-32);
             else ans.push_back(s[i]+32);
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