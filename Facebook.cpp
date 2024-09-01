#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        vector<pair<int,int>>v;
        int a[n];
        int b[n];
        for(int i=0;i<n;i++){
           cin>>a[i];
        }
        for(int i=0;i<n;i++){
           cin>>b[i];
        }
        for(int i=0;i<n;i++){
            v.push_back({a[i],b[i]});
        }
        vector<pair<int,int>>vv;
        vv=v;
        sort(v.rbegin(),v.rend());
        // for(auto x:v){
        //     cout<<x.first<<" "<<x.second<<endl;
        // }
        for(int i=0;i<vv.size();i++){
            if(v[0].first==vv[i].first && v[0].second==vv[i].second){
                cout<<i+1<<endl;
                break;
            }
        }
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}