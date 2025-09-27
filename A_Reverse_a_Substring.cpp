#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    int n;
    cin>>n;
    map<char,vector<int>> mp;
    string s;
    cin>>s;
    for(int i=0;i<n;i++){
        mp[s[i]].push_back(i+1);
    }
    for(int i=0;i<n;i++){
        for(char ch=s[i]-1; ch>='a'; ch--){
            if(mp[ch].size()>0 && mp[ch].back()>i+1){
                cout<<"YES\n"<<i+1<<' '<<mp[ch].back()<<'\n';
                return;
            }
        }
    }
    cout<<"NO\n";

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}