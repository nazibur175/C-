#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    vector<char>v;
    vector<char>vv;
    map<char,int>m;
    for(auto x:s) m[x]++;
    char ch;
    
    for(int i=0;i<s.size();i++){
        if(s[i]==s[i+1]){
            v.push_back(s[i]);
            vv.push_back(s[i+1]);
            i++;
        }
        else ch=s[i];
    }
    reverse(vv.begin(),vv.end());
    for(auto x:v) cout<<x;
    if(s.size()%2)
    cout<<ch;
    for(auto x:vv) cout<<x;
    cout<<endl;
    
}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}