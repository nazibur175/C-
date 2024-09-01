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
    int sum=a[0];
    int ans=a[0];
    for(int i=1;i<n;i++){
        ans^=a[i];
        sum+=a[i];
    }
    if(ans==0 || sum==360) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    cout<<ans<<" "<<sum<<endl;

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}