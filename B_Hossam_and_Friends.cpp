#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,m;
        cin>>n>>m;
        //vector<int>v(n,0);
        vector<int>pre(n+1,0);

        for(int i=1;i<=m;i++){
            int x,y;
            cin>>x>>y;
            if(x>y) swap(x,y);
            pre[y]=max(pre[y],x);
            
        }
        int in=1;
        int ans=0;
        for(int i=1;i<=n;i++){

            if(pre[i])
                in = max(in,pre[i]+1);
            ans+=i-in+1;
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