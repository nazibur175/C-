#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    int i,j,n,l,r,x;
    cin>>n>>l>>r>>x;
    int a[n+5];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int ans=0;
    for(i=1; i<(1<<n); i++)
    {
        int sum=0,mn=INT_MAX,mx=INT_MIN,cnt=0;
        for(j=0; j<n; j++)
        {
            if(i&(1<<j))
            {
                sum+=a[j],mn=min(mn,a[j]),mx=max(mx,a[j]),cnt++;
            }
        }
        if(sum>=l&&sum<=r&&mx-mn>=x&&cnt>1)
            ans++;
 
    }
    cout<<ans<<endl;

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}