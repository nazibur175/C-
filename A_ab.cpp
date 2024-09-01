#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int yes=0;
    for(int i=0;i<n-1;i++){
        if(s[i]=='a' && s[i+1]=='b'){
                yes=1;
                break;
        }
        else if(s[i]=='b' && s[i+1]=='a'){
            yes=1;
            break;
        }
        else continue;
    }
    if(yes) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}