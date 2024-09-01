#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int N=1e5+9;
void solve(){
    char s[100100];
    char *p;
    cin>>s;
     if((p=strstr(s,"AB")) && (strstr(p+2,"BA")))  cout<<"YES"<<endl;
     else if((p=strstr(s,"BA")) && (strstr(p+2,"AB")))  cout<<"YES"<<endl;
     else cout<<"NO"<<endl;

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}