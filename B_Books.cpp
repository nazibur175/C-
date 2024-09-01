#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    int n,t;
    cin>>n>>t;
    int a[n+9]={0};
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    int sum=0;
    int in=0;
    int ans=0;
    for(int i=0;i<n;i++){
        while (in<n && sum+a[in]<=t)
        {
            sum+=a[in];
            in++;
        }
        ans=max(ans,in-i);
        sum-=a[i];
    }
    cout<<ans<<endl;

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}