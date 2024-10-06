#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    string s;
    cin>>s;
    s+="#";
    int n=26;
    map<char,int>m;
    for(int i=1;i<=n;i++){
        m[s[i]]=i;
    }
    int pre = m['A'];
    int ans=0;
    for(int i=0;i<26;i++){
        char ch = 'A'+i;
        ans+= abs(m[ch]-pre);
        pre=m[ch];
    }
    cout<<ans<<endl;

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}