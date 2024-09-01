#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int pre[n+1]={0};
    int post[n+1]={0};
    for(int i=0;i<n;i++){
        pre[i]=post[i]=1;
    }
    int cnt=0;
    for(int i=1;i<n;i++){
        if(a[i-1]<a[i]){
            //cnt++;
            pre[i]=pre[i-1]+pre[i];
        }
        // else cnt=0;
    }
    // cnt=0;
    for(int i=n-2;i>=0;i--){
        if(a[i]<a[i+1]){
            // cnt++;
            post[i]=post[i+1]+post[i];
        }
        // else cnt=0;
    }
    // for(int i=0;i<n;i++){
    //     cout<<pre[i]<<" ";
    // }
    // cout<<endl;
    // for(int i=0;i<n;i++){
    //     cout<<post[i]<<" ";
    // }
    // cout<<endl;
    int ans= pre[n-1];
    for(int i=0;i<n-2;i++){
        if(a[i]<a[i+2]){
            ans = max(ans,pre[i]+post[i+2]);
        }
    }
    cout<<ans<<endl;


}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}