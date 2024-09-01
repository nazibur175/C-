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
        int b[n];
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];

        vector<pair<int,int>>v;
        for(int i=0;i<n;i++){
            v.push_back({a[i]+b[i],i});
        }
        sort(v.rbegin(),v.rend());
        int ans=0;
        for(int i=0;i<n;i++){
            if(i%2==0){
                ans+=a[v[i].second]-1;
            }
            else ans-=b[v[i].second]-1;
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