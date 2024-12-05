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
        map<char,int>m;
        for(int i=0;i<n;i++){
            m[s[i]]++;
        }
        vector<pair<int,char>>v;
        for(auto i:m){
            v.push_back({i.second,i.first});
        }
        sort(v.begin(),v.end());
        char low=v[0].second;
        char high=v[v.size()-1].second;
        for(int i=0;i<n;i++){
            if(s[i]==low) {
                s[i]=high;
                break;
            }
        
            
        }
        cout<<s<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}