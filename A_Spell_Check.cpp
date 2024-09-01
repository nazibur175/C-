#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        map<char,int>m;
        int n;
        cin>>n;
        string s;
        cin>>s;
        for(int i=0;i<n;i++) m[s[i]]++;

        if(m['T'] && m['i'] && m['m'] && m['u'] && m['r'] && n==5) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}