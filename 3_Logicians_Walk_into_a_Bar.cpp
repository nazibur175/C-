#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        string s;
        cin>>s;
        int f=0;
        for(int i=0;i<n-1;i++){
            if(s[i]=='0') f=1;
            if(f) cout<<"NO"<<endl;
            else cout<<"IDK"<<endl;
        }
        if(f==0 && s[n-1]=='1') cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}