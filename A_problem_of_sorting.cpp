#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
struct st
{
    string s;
    int db;
};
bool cmp(st &x,st &y){
    return x.db > y.db;
}
void solve(){
    test{
        vector<st>v;
        int n;
        cin>>n;
        cin.ignore();
        for(int i=0;i<n;i++){
        
            string str,s;
            int db;
            getline(cin,str);
            int sz=str.size();
            s=str.substr(0,sz-4-1);
            string ss=str.substr(sz-4);
            cout<<sz-4<<endl;
            db= stoi(ss);
            //cout<<sz<<" "<<s<<" "<<db<<endl;
            v.push_back({s,db});
        }
        sort(v.begin(),v.end(),cmp);
        for(auto x:v){
            cout<<x.s<<endl;
        }
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}