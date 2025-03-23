#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int inf = 1e18;
void solve(){
    int t;
    cin>>t;
    for(int tt=1;tt<=t;tt++){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int is[n+1],ds[n+1];
        for(int i=0;i<=n;i++){
            is[i]=inf;
            ds[i]=inf;
        }
        is[0]=-inf;
        ds[0]=-inf;
        int lis[n+1],lds[n+1];
        for(int i=1;i<=n;i++){
            int x = lower_bound(is+1,is+n+1,a[i-1])-is;
            is[x]=a[i-1];
            lis[i]=x;
        }
        for(int i=n;i>=1;i--){
            int x = lower_bound(ds+1,ds+n+1,a[i-1])-ds;
            ds[x]=a[i-1];
            lds[i]=x;
        }
        int ans=0;
        for(int i=1;i<=n;i++){
            ans=max(ans,2*min(lis[i],lds[i])-1);
        }
        cout<<"Case "<<tt<<": ";
        cout<<ans<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}