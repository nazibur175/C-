#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    string s;
    cin>>s;
    int c=1;
    int ma=1;
    for(int i=0;i<s.size();i++){
        if(s[i]==s[i+1]){
            c++;
            ma=max(c,ma);
        }
        else c=1;
    }
    cout<<ma<<endl;
    

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}