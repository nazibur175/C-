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
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        vector<pair<int,int>>v;
        vector<int>frist;
        for(int i=1;i<=n;i++){
            if(a[i]<i){
                v.push_back({a[i],i});
                frist.push_back(a[i]);
            }
        }
         int ans=0;
         sort(v.begin(),v.end());
         sort(frist.begin(),frist.end());
         for(int i=0;i<v.size();i++){
             int x= v[i].second;
             int ind = upper_bound(frist.begin(),frist.end(),x)-frist.begin();
             ans+=(v.size()-ind);
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