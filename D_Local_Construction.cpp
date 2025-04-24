#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        vector<int>v(n+1,0);
        int mx = log2(n)+1;
        vector<int>vv[mx+100];
        for(int i=1;i<=n;i++){
            cin>>v[i];
            if(v[i]==-1){
                vv[0].push_back(i);
                continue;
            }
            vv[v[i]].push_back(i);
        }
        vector<int>ans(n+2,0);
        int cnt=n;
        for(int i=1;i<=mx+50;i++){
            for(auto x:vv[i]){
                ans[x]=cnt;
                cnt--;
            }
        }
        ans[vv[0][0]]=1;
        for(int i=1;i<=n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}