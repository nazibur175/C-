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
        map<int,int>m;
        for(int i=0;i<n;i++) {
            cin>>a[i];
            m[a[i]]++;
        }
        int q=n-1;
        vector<int>v[n+9];
        for(int i=0;i<q;i++){
            int x,y;
            cin>>x>>y;
            v[x].push_back(y);
            v[y].push_back(x);
        }
        int ans=0;
        for(auto x:m){
            ans+=x.second-1;
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