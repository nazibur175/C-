#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        vector<int>v(n+2,0);
        int mn[n+2]={0};
        mn[0]=INT64_MAX;
        int sum=0;
        for(int i=1;i<=n;i++){
            cin>>v[i];
            mn[i]=min(mn[i-1],v[i]);
            sum+=mn[i];
        }
        int ans=sum;
        int presum=0;
        for(int i=1;i<=n;i++){
            int cur=min(mn[i-1],v[i]+v[i+1])+presum;
            presum+=mn[i];
            ans=min(ans,cur);
        }
        cout<<ans<<"\n";
        

    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}