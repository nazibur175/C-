#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    string s;
    cin>>s;
    map<char,int>m;
    for(int i=0;i<s.size();i++){
        m[s[i]]++;
    }
    int f=0;
    for(auto x:m) {
        if(x.second>=2){
            f=1;
            break;
        }
    }

    if(f) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;


}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}