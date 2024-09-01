#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    int n;
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int x=a[n/2];
    int ans=0;
    for(int i=0;i<n;i++){
        ans+=abs(a[i]-x);
    }
    cout<<ans<<endl;


}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}