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
        for(int i=0;i<n;i++) cin>>a[i];

        int pre[n+1]={0};
       
        for(int i=1;i<=n;i++){
            pre[i]=pre[i-1]^a[i-1];
        }

        int ans=0;
        for(int i=0;i<60;i++){
            int cnt0=0;
            int cnt1=1;
            for(int j=0;j<n;j++){
                if((pre[j+1]&(1LL<<i))){
                    cnt0++;
                }
                else cnt1++;
            }
            ans+=( (1ll<<i) * (cnt0*cnt1));

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