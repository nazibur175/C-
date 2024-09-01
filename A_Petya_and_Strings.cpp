#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    string s,ss;
    cin>>s>>ss;
    int n=s.size();

    int f=0;
    for(int i=0;i<n;i++){
        if(tolower(s[i])==tolower(ss[i])) continue;
        else if(tolower(s[i])>tolower(ss[i])){
            cout<<1<<endl;
            f=1;
            break;
        }
        else {
            cout<<-1<<endl;
            f=1;
            break;
        }
       
    }
    if(f==0) cout<<0<<endl;

    // Lexicographycally
    // uppercase to lower
    // lower to upper
    //
    //aaaa 
    //aaaA


}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}