#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    int n,x;
    cin>>n>>x;
    int a[n+9]={0};
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int pre[n+9]={0};
    pre[0]=a[0];
    for(int i=1;i<n;i++){
        pre[i]=pre[i-1]+a[i];
    }
    // for(int i=0;i<n;i++){
    //     cout<<pre[i]<<" ";
    // }
    // cout<<endl;
    int i=0,j=0;
    int ans=0;
    while (i<=n && j<=n)
    {
        if(i==j){
            cout<<a[i]<<" "<<x<<endl;
            if(a[i]==x){
                ans++;
                i++;
                j++;
            }
            else if(a[i]<x){
                j++;
            }
            else {
                i++;
                j++;
            }
        }
        else {
            if((pre[j]-pre[i-1])==x){
                ans++;
                i++;
             }
        else if((pre[j]-pre[i-1])<x){
                j++;
            }
        else {
                i++;
        }
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