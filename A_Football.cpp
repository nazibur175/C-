#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    map<string,int>m;
    test{
        string s;
        cin>>s;
        m[s]++;
    }
    string ans;
    int ma=0;
    for(auto x:m){
        if(x.second>ma){
            ans=x.first;
            ma=x.second;
        }
    }
    cout<<ans<<endl;

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}