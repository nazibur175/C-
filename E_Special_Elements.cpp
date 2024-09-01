#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        vector<int>a(n);
        for(auto &x:a) cin>>x;

        vector<int>pre(n+1,0);
        for(int i=0;i<n;i++){
            pre[i+1]=pre[i]+a[i];
        }
        //map<int,int>m;
        vector<bool> m(n + 1, false);
        for(int i=0;i<n;i++){
            for(int j=i+2;j<=n && (pre[j]-pre[i])<=n;j++){
                m[pre[j]-pre[i]]=true;
            }
        }
        int ans=0;
        for(auto x:a) ans+=m[x];
        cout<<ans<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}