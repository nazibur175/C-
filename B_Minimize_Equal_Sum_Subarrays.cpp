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
        
        vector<int>v;
        for(int i=1;i<n;i++) v.push_back(a[i]);
        v.push_back(a[0]);
        for(int i=0;i<n;i++) cout<<v[i]<<" ";
        cout<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}