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
        int a[50]={0};
        for(int i=0;i<n;i++){
            a[s[i]-'a']++;
        }
        int ans=1;
        for(int i=0;i<26;i++){
            ans=(ans*(a[i]+1))%mod;
        }
        ans--;
        cout<<ans<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}