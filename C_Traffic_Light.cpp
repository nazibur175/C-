#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        char ch;
        cin>>ch;
        string s;
        cin>>s;
        s = s + s;
        vector<int>temp;
        for(int i=0;i<s.size();i++){
            if(temp.empty()){
                if(s[i]== ch){
                    temp.push_back(i);
                }
                else continue;
            }
            else if(s[i]==ch && s[temp.back()]!=s[i]){
                temp.push_back(i);
            }
            else if(s[i]=='g' && s[temp.back()]!=s[i]){
                temp.push_back(i);
            }
        }
        // for(auto x:temp){
        //     cout<<x<<" ";
        // }
        // cout<<"\n";
        int ans = 0;
        for(int i=0;i<temp.size()-1;i+=2){
            ans = max(ans,temp[i+1]-temp[i]);
        }
        cout<<ans<<"\n";
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}