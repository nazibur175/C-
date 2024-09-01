#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             998244353
#define test int t; cin>>t; while(t--)
void solve(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        int c=0;
        for(int i=0;i<s.size()-1;i++){
            if(s[i]==s[i+1]) c++;
        }
        if(c) c++;
        int ans=1;
        for(int i=1;i<=c;i++){
            ans=(ans*i)%mod;
        }
        if(c==0)
        cout<<c<<" "<<ans%mod<<endl;
        else 
        cout<<c-1<<" "<<ans%mod<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}