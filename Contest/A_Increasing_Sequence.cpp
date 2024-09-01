#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        int ans=1;
        for(int i=0;i<n;i++){
            if(a[i]==ans){
                ans=a[i]+1;
            }
            ans++;
        }
        cout<<ans-1<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}