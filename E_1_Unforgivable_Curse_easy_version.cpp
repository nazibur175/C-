#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
    int n,k;
    cin>>n>>k;
    string s,ss;
    cin>>s>>ss;
    string a=s,b=ss;
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    if(a!=b)
    {
        cout<<"NO"<<endl;
        continue;
    }
    if(s==ss)
        cout<<"YES"<<endl;
    else if(n<=3 && s!=ss){
            cout<<"NO"<<endl;
        }
    else if(n==4){
        if(s[1]==ss[1] && s[2]==ss[2])
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    else if(n==5)
    {
        if(s[2]!=ss[2])
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
    else 
        cout<<"YES"<<endl;

    }
}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}