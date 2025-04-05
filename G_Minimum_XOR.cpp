#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        int a[n+1];
        int pre[n+2]={0};
        int post[n+2]={0};
        for(int i=1;i<=n;i++){
            cin>>a[i];
            pre[i]=pre[i-1]^a[i];
        }
        for(int i=n;i>=1;i--){
            post[i]=post[i+1]^a[i];
        }
        int ans=pre[n];
        
        for(int i=1;i<=n;i++){
            ans=min(ans,(pre[i-1]^post[i+1]));
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