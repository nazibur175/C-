#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int suf[n+9]={0};
        for(int i=n-1;i>=0;i--){
            suf[i]=suf[i+1]+a[i];
        }
        int ans=suf[0];
        for(int i=1;i<n;i++){
            if(suf[i]>0) ans+=suf[i];
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