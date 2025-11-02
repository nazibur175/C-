#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        string s;
        cin>>s;
        int a[26];
        for(int i=0;i<26;i++){
            cin>>a[i];
        }
        map<char,deque<int>> mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]].push_back(i);
            //cout<<mp[s[i]].back()<<" ";
        }
        for(int i=0;i<26;i++){
            int x='a'+i;
            int mx_in=-1;
            for(char c=x+1;c<='z';c++){
                if(mp[c].size()==0)continue;
                mx_in=max(mx_in,mp[c].back());
            }
            char ch=x;
            if(mx_in==-1)continue;
            while(!mp[ch].empty() && mp[ch].front()<mx_in && a[i]>0){
                //cout<<mx_in<<" "<<mp[ch].front()<<" "<<a[i]<<endl;
                a[i]--;
                mp[ch].pop_front();
            }
        }
        vector<int>in;
        for(auto it:mp){
            for(auto x:it.second){
                in.push_back(x);
            }
        }
        sort(in.begin(),in.end());
        string res="";

        for(auto x:in){
            
            res.push_back(s[x]);
        }
        cout<<res<<endl;

    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}