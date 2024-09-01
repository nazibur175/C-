#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    string s;
    cin>>s;
    int n=s.size();
    sort(s.begin(),s.end());
    vector<string>v;
    do{
        v.push_back(s);
    }
    while(next_permutation(s.begin(), s.end()));
    cout<<v.size()<<endl;
    for(auto x:v){
       cout<<x<<endl;
    }
    
}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}