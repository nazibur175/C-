#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    string s,ss,sss;
    getline(cin,s);
    getline(cin,ss);
    getline(cin,sss);
    int c1=0,c2=0,c3=0;
    //cout<<s<<endl;
    //cout<<ss<<endl;
    //cout<<sss<<endl;
    for(int i=0;i<s.size();i++){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u') c1++;
    }
    for(int i=0;i<ss.size();i++){
        if(ss[i]=='a' || ss[i]=='e' || ss[i]=='i' || ss[i]=='o' || ss[i]=='u') c2++;
    }
    for(int i=0;i<sss.size();i++){
        if(sss[i]=='a' || sss[i]=='e' || sss[i]=='i' || sss[i]=='o' || sss[i]=='u') c3++;
    }
    //cout<<c1<<" "<<c2<<" "<<c3<<endl;
    if(c1==5 && c2==7 && c3==5) cout<<"YES"<<endl;
    else cout<<"NO"<<endl; 

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}