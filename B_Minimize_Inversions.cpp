#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        map<int,int>m;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            m[v[i]]=x;
        }
        sort(v.begin(),v.end());
        for(auto x:v) cout<<x<<" ";
        cout<<endl;
        for(auto x:v) cout<<m[x]<<" ";
        cout<<endl;

    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}