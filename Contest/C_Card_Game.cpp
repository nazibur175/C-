#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define MOD 1000000007
#define test int t; cin>>t; while(t--)
const int MAX_N = 2e5+9;
int a[MAX_N], presum[MAX_N];
void solve(){
    test{
        int n;
        cin>>n;
        memset(presum,0,sizeof(presum));
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=n-1;i>=0;i--){
            if(a[i]>=0)
            presum[i]=presum[i+1]+a[i];
            else 
             presum[i]=presum[i+1];
        }
        int ans=0;
        for(int i=0;i<n;i++){
            cout<<presum[i]<<" ";
        }
        cout<<endl;
        for(int i=0;i<n;i++){
            if (i % 2 == 0) {
            ans = max(ans, presum[i + 1] + a[i]);
            } 
            else {
             ans = max(ans, presum[i + 1]);
            }
            cout<<ans<<" ";
        }
        cout<<endl;
        // cout<<ans<<endl;
    }

}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
