#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    int n;
    cin>>n;
    int x[n+9];
    int h[n+9];
    for(int i=0;i<n;i++){
        cin>>x[i]>>h[i];
    }
    int ans=min(2LL,n);
    for(int i=1;i<n-1;i++){
        if((x[i]-x[i-1])>h[i]) ans++;
        else if((x[i]+h[i]<x[i+1])) ans++, x[i]=x[i]+h[i];
    }
    cout<<ans<<endl;
}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}