#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        int dig[n+1]={0};
        for(int i=0;i<n-1;i++){
            int x,y;
            cin>>x>>y;
            dig[x]++;
            dig[y]++;
        }
        string s;
        cin>>s;
        s=" "+s;
        int cnt0=0;
        int cnt1=0;
        int cnt_q=0;
        int internal_q=0;
        for(int i=2;i<=n;i++){
            if(dig[i]==1){
                if(s[i]=='?') cnt_q++;
                else if(s[i]=='0') cnt0++;
                else cnt1++;
            }
            else if(s[i]=='?') internal_q++;
        }
        int ans=0;
        if(s[1]=='0'){
            ans=cnt1 + (cnt_q+1)/2;
        }
        else if(s[1]=='1') 
            ans=cnt0 + (cnt_q+1)/2;
        else {
            ans=max(cnt0,cnt1);
            if(cnt0==cnt1 && internal_q%2==1){
                cnt_q++;
            }
            ans= ans +  ((cnt_q)/2);
           
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