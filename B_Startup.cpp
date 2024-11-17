#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,k;
        cin>>n>>k;
        map<int,int>m;
        for(int i=0;i<k;i++){
            int x,y;
            cin>>x>>y;
            m[x]+=y;
        }
        vector<int>v;
        for(auto x:m){
            v.push_back(x.second);
        }
        sort(v.rbegin(),v.rend());
        int ans=0;
        int x=min(n,(int)v.size());
        for(int i=0;i<x;i++){
            ans+=v[i];
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