#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];

        sort(a,a+n);
        vector<pair<int,int>>v;
        for(int i=0;i<n-1;i++){
            v.push_back({a[i+1]-a[i]+1,1});
            v.push_back({(a[i]+a[i+1]),-1});
        }

        sort(v.begin(),v.end());
        int l=0;
        int r=0;
        int cnt=0;
        int ans=0;
        for(auto x:v){
            r=x.first;
            if(cnt){
                ans+=(r-l);
            }
            cnt+=x.second;
            l=r;
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