#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,m;
        cin>>n>>m;
        int a[n];
        int b[m];
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<m;i++) cin>>b[i];
        int val = *max_element(b,b+m);
        //cout<<val<<endl;
        int in=n-val;
        //cout<<in<<endl;
        sort(a+in,a+n);
        for(int i=0;i<n;i++) cout<<a[i]<<" ";
        cout<<endl;

    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}