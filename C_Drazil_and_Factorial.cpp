#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    string ch[10]={"","","2","3","223","5","53","7","7222","7332"};
    string ans ;
    for(int i=0;i<n;i++){
        int digit = s[i]-'0';
        ans += ch[digit];
    }
    sort(ans.begin(),ans.end());
    reverse(ans.begin(),ans.end());
    cout<<ans<<endl;


}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}