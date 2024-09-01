#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,k;
        cin>>n>>k;
        int a[n];
        int b[n];
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];
        int presum[n]={0};
        presum[0]=a[0];
        for(int i=1;i<n;i++){
            presum[i]=a[i]+presum[i-1];
        }
        int bmax=0;
        int ans=0;
        int x=k;
        k--;
        for(int i=0;i<n;i++){
            if(x==0) break;
            bmax=max(bmax,b[i]);
            ans=max(ans,presum[i]+bmax*(k-i));
            x--;
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