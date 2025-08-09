#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,k;
        cin>>n>>k;
        int a[n*k];
        for(int i=0;i<n*k;i++) cin>>a[i];
        int temp = ((n+1)/2) - 1;
        int ex=n-1-temp;
        temp=temp*k;

        int ans=0;
        for(int i=temp;i<n*k;i+=ex+1){
            ans+=a[i];
        }
        cout<<ans<<"\n";
        
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}