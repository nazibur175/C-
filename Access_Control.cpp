#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,x;
        cin>>n>>x;
        string s;
        cin>>s;
        int len=s.size();
        int cnt=0;
        int ans=1;
        for(int i=0;i<len;i++){
            if(s[i]=='1')  cnt = x;
            else cnt--;
            if(cnt<0) ans=0;
        }
        if(ans) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}