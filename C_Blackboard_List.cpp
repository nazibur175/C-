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
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        if(a[0]<0) cout<<a[0]<<endl;
        else 
        cout<<a[n-1]<<endl;

    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}