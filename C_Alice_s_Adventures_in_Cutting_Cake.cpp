#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,m,v;
        cin>>n>>m>>v;
        vector<int>a(n+3,0);
        vector<int>soja;
        vector<int>ulta;
        soja.push_back(0);
        ulta.push_back(n+1);
        for(int i=1;i<=n;i++)cin>>a[i];
        vector<int>presum(n+5,0);
        int sum=0;
        for(int i=1;i<=n;i++){
            presum[i]=presum[i-1]+a[i];
            sum+=a[i];
            if(sum>=v){
                soja.push_back(i);
                sum=0;
            }
        }
        sum=0;
        for(int i=n;i>=1;i--){
            sum+=a[i];
            if(sum>=v){
                ulta.push_back(i);
                sum=0;
            }
        }
        if(soja.size()<=(m)) {
            cout<<"-1"<<endl;
            continue;
        }
        int ans=0;
        for(int i=0;i<=m;i++){
            ans = max(ans, presum[ulta[m-i]-1] - presum[soja[i]]);
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