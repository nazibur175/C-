#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define   operation()    ios_base:: sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define test int t; cin>>t; while(t--)
void solve(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    int gcdfront[n];
    int gcdback[n];
    gcdfront[0]=a[0];
    for(int i=1;i<n;i++){
        gcdfront[i]=__gcd(gcdfront[i-1],a[i]);
    }
    gcdback[n-1]=a[n-1];
    for(int i=n-2;i>=0;i--){
        gcdback[i]=__gcd(gcdback[i+1],a[i]);
    }

    // for(int i=0;i<n;i++)cout<<gcdfront[i]<<" ";
    // cout<<endl;
    // for(int i=0;i<n;i++)cout<<gcdback[i]<<" ";
    // cout<<endl;
    int ans=0;
    for(int i=0;i<n;i++){
        if(i==0)
        ans=max(ans,gcdback[i+1]);
        if(i==n-1)
        ans=max(ans,gcdfront[i-1]);
        ans=max(ans,__gcd(gcdfront[i-1],gcdback[i+1]));
    }
    cout<<ans<<endl;


}
int32_t main()
{
operation();
solve();

}
