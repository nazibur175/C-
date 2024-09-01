#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int a,b,n;
        cin>>a>>b>>n;
        int arr[n+5];
        for(int i=0;i<n;i++){
            cin>>arr[i];
            arr[i]=min(arr[i],a-1);
        }
        int ans=b;
        for(int i=0;i<n;i++){
            ans+=arr[i];
        }
        cout<<ans<<endl;


    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}