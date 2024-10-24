#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        string s;
        cin>>s;
        string ss;
        cin>>ss;
        int n=s.size();
        int nn=ss.size();
        int cnt=0;
        for(int i=0;i<min(n,nn);i++){
            if(s[i]==ss[i]) cnt++;
            else break;
        }
        //cout<<cnt<<endl;
         int ans=0;
        if(cnt) 
            ans=cnt+1;
        //cout<<ans<<endl;
        ans+=(min(n,nn)-cnt)+max(n,nn)-cnt;
        cout<<ans<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}