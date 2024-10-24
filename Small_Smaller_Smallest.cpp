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
        int cnt0=0,cnt1=0;
        for(int i=0;i<n;i++){
            if(s[i]=='0') cnt0++;
            else cnt1++;
        }
        if(cnt1%2==1)cout<<1<<endl;
        else if(cnt1==0) cout<<n<<endl; 
        else cout<<0<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}