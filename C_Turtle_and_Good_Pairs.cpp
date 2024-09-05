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
        for(auto x:m){
            v.push_back({x.second,x.first});
        }
        sort(v.begin(),v.end());

        string s2;
        for(auto x:v){
            int nn=x.first;
            for(int i=0;i<nn;i++){
                // cout<<x.second;
                s2.push_back(x.second);
            }
        }
        //cout<<endl;
        //cout<<s1<<endl;
        string s1=s2;
        reverse(s2.begin(),s2.end());
        //  cout<<s1<<endl;
        //  cout<<s2<<endl;
        string ans;
        for(int i=0;i<n;i++){
            if(i%2==0){
                ans.push_back(s1.back());
                s1.pop_back();
            }
            else {
                ans.push_back(s2.back());
                s2.pop_back();
            }
        }
        cout<<ans<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}