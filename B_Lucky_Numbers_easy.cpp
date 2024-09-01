#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    string s;
    cin>>s;
    auto c='0';
    auto it = find(s.begin(),s.end(),c);
    if(it!=s.end()) s.erase(it);
    else s.pop_back();
    cout<<s<<endl;

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}