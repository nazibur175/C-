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
    int pre[n];
    int post[n];
    pre[0]=a[0];
    post[n-1]=a[n-1];
    for(int i=1;i<n;i++){
        pre[i]=__gcd(a[i],pre[i-1]);
    }
    for(int i=n-2;i>=0;i--){
        post[i]=__gcd(a[i],post[i+1]);
    }
    int ans=0;
    int gc=0;
    for(int i=0;i<n;i++){
        // ans=max(ans,__gcd(pre[i-1],post[i+1]));
        if(i==0){
            gc=post[i+1];
        }
        else if(i==n-1){
            gc=pre[i-1];
        }
        else {
            gc=__gcd(pre[i-1],post[i+1]);
        }
        ans=max(ans,gc);
    }
    cout<<ans<<endl;

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}