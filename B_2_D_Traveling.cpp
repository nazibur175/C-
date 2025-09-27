#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,k,a,b;
        cin>>n>>k>>a>>b;
        vector<int>x(n+1,0),y(n+1,0);
        for(int i=1;i<=n;i++){
            cin>>x[i]>>y[i];
        }
        int ans= llabs(x[a]-x[b])+llabs(y[a]-y[b]);
        int minx=INT64_MAX/2;
        int miny=INT64_MAX/2;
        for(int i=1;i<=k;i++){
            minx=min(minx,llabs(x[a]-x[i])+llabs(y[a]-y[i]));
            miny=min(miny,llabs(x[b]-x[i])+llabs(y[b]-y[i]));
        }
        ans=min(ans,minx+miny);
        cout<<ans<<"\n";
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}