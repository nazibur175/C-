#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int cnt0=0,cnt1=0;
        for(int i=0;i<n;i++){
            if(s[i]=='0') cnt0++;
            else cnt1++;
        }
        int extra=n-(2*k);
        cnt0-=extra/2;
        cnt1-=extra/2;
        if(cnt0<0 || cnt1<0) cout<<"NO"<<endl;
        else if(cnt0%2==0 && cnt1%2==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}