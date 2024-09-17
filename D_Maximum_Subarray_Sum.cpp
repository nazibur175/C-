#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    int n;
    cin>>n;
    int a[n];
    int mx=INT64_MIN;
    for(int i=0;i<n;i++){
        cin>>a[i];
        mx=max(a[i],mx);
    }
    int sum=0;
    int ans = 0;
    for(int i=0;i<n;i++){
        sum=max(1LL*0,sum+a[i]);
        ans=max(ans,sum);
    }
    if(ans==0) cout<<mx<<endl;
    else cout<<ans<<endl;
    

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}   