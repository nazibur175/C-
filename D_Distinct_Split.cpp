#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        string str;
        cin>>str;
        vector<int>suf(n,0),pre(n,0);
        set<char>s;
        for(int i=0;i<n;i++){
            s.insert(str[i]);
            pre[i]=s.size();
        }
        s.clear();
        for(int i=n-1;i>=0;i--){
            s.insert(str[i]);
            suf[i]=s.size();
        }
        int ans=0;
        for(int i=0;i<n-1;i++){
            ans=max(ans,pre[i]+suf[i+1]);
        }
        cout<<ans<<endl;

    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}