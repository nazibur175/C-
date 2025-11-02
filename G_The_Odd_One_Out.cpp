#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){

    string s;
    cin >> s;
    map<char, int>mp;
    for(auto x: s) mp[x]++;
    for(auto [x, y]: mp){
        if(y <= 1){
            cout << x << endl;
            break;
        }
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}