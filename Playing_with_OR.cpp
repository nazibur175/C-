#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,k;
        cin>>n>>k;
        int a[n+9]={0};
        for(int i=1;i<=n;i++){
            int x;
            cin>>x;
            a[i]=x%2;
        }
        for(int i=1;i<=n;i++){
            a[i]=a[i]+a[i-1];
        }
        // for(int i=1;i<=n;i++){
        //     cout<<a[i]<<" ";
        // }
        // cout<<" close"<<endl;
        int ans=0;
        for(int i=1;i<=(n-k+1);i++){
            int x= a[i+k-1]-a[i-1];
            // cout<<i-1<<" "<<i+k-1<<" "<<x<<endl;
            if(x>0) ans++;
        }
        cout<<ans<<endl;
        // cout<<"-------"<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}