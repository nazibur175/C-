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
    int pre_mul[n];
    pre_mul[0]=a[0];
    for(int i=1;i<n;i++){
        pre_mul[i]=pre_mul[i-1]*a[i];
    }
    int post_mul[n];
    post_mul[n-1]=a[n-1];
    for(int i=n-2;i>=0;i--){
        post_mul[i]=post_mul[i+1]*a[i];
    }
    for(int i=0;i<n;i++){
        if(i==0){
            cout<<post_mul[i+1];
        }
        else if(i==n-1){
            cout<<pre_mul[i-1];
        }
        else{
            cout<<pre_mul[i-1]*post_mul[i+1];
        }
        if(i!=n-1) cout<<" ";
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}