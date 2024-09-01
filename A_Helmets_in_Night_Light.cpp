#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,p;
        cin>>n>>p;
        int a[n];
        int b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        vector<pair<int,int>>v;
        for(int i=0;i<n;i++){
            v.push_back({b[i],a[i]});
        }
        sort(v.begin(),v.end());
        int cost = p;
        int people=n-1;
        for(int i=0;i<n;i++){
            while (people && v[i].second)
            {
                cost+=min(p,v[i].first);
                v[i].second--;
                people--;
            }
            
        }
        cout<<cost<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}