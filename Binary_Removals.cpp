#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,x,k;
        cin>>n>>x>>k;
        string s;
        cin>>s;
        int cnt=0;
        int one=0;
        for(int i=0;i<n;i++){
            if(s[i]=='1') one++;
            else cnt+=one;
        }
        if(cnt%k==0 && cnt<=x) cout<<"1"<<endl;
        else cout<<2<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}