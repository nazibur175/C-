#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    string s;
    cin>>s;
    int n;
    cin>>n;
    map<char,int>m;
    for(int i=0;i<s.size();i++){
        m[s[i]]++;
    }
    int ans=0;
    for(int i=0;i<n;i++){
        string ss;
        cin>>ss;
        map<char,int>mm;
        for(auto x:ss){
            mm[x]++;
        }
        int ok=1;
        for(auto x:mm){
            if(m[x.first]>=x.second) {
                continue;
            }
            else {
                ok=0;
                break;
            }
        }
        if(ok) ans++;
    

    }
    cout<<ans<<endl;


}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}