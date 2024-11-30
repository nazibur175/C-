#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,q;
        cin>>n>>q;
        string s;
        cin>>s;
        map<char,set<int>>mp;
        for(int i=0;i<n;i++){
            mp[s[i]].insert(i+1);
        }
        while(q--){
            char ch;
            cin>>ch;
            int in= ch-'a';
            //cout<<in<<endl;
            int mn_index=n;
            
            for(int i=0;i<in;i++){
                if(mp[char(i+'a')].size()==0) continue;
                mn_index = min(mn_index,*(mp[char(i+'a')].begin()));
            }
            if(s[mn_index-1]==ch){
                mn_index= *(mp[ch].begin());
            }
            char temp = s[mn_index-1];
            mp[temp].erase(mn_index);
            mp[ch].insert(mn_index);
            s[mn_index-1]=ch;
            cout<<mn_index<<endl;
            //cout<<s<<endl;
        }
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}