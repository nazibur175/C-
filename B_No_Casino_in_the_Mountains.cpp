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
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int pre[n+1];
        pre[0]=0;
        for(int i=1;i<=n;i++){
            pre[i]=pre[i-1]+a[i-1];
        }
        int ans=0;
        for(int i=1;i+k-1<=n;i++){
            int sum=pre[i+k-1] - pre[i-1];

            if(sum==0){
                //cout<<"="<<i<<endl;
                ans++;
                i=i+k;
            }
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