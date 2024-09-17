#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,m,k;
        cin>>n>>m>>k;
        vector<int>v;
        v.push_back(n);
        v.push_back(m);
        v.push_back(k);
        v.push_back(k);
        sort(v.begin(),v.end());
        cout<<v[0]*v[1]<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}