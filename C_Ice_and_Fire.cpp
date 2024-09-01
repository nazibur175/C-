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
        vector<int>ans(n);
        ans[0]=1;
        for(int i=1;i<n;i++){
            if(s[i]==s[i-1]) ans[i]=ans[i-1];
            else ans[i]=i+1;
        }
        for(int i=0;i<n-1;i++) cout<<ans[i]<<" ";
        cout<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}