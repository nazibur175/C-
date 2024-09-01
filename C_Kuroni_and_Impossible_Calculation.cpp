#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    int n,m;
    cin>>n>>m;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];

    if(n>m) cout<<0<<endl;
    else {
        int ans=1;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int val=abs(a[i]-a[j]);
                ans= (ans*(val%m))%m;
            }
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