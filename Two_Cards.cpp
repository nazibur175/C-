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
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        vector<pair<int,int>>v;
        for(int i=0;i<n;i++){
            v.push_back({a[i],b[i]});
        }
        sort(v.rbegin(),v.rend());
        int ans=0;
        int mx = max(v[0].first,v[0].second);
        for(int i=1;i<n;i++){
            if(max(v[i].first,v[i].second)>mx){
                ans = 1;
                break;
            }
        }
        mx = max(v[1].first,v[1].second);
        for(int i=0;i<n;i++){
            if(i==1) continue;
            if(max(v[i].first,v[i].second)>mx){
                ans = 1;
                break;
            }
        }
        if(ans)cout<<"Yes\n";
        else cout<<"No\n";
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}