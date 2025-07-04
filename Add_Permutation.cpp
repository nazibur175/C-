#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,k;
        cin>>n>>k;
        int ans[n+1];
        int lagbe=n-(k-1);
        int in=1;
        for(int i=lagbe;i>=1;i--){
            ans[in++]=i;
        }
        for(int i=lagbe+1;i<=n;i++){
            ans[i]=i;
        }
        for(int i=1;i<=n;i++){
            cout<<ans[i];
            if(i<=n-1) cout<<" ";
        }
        cout<<"\n";
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}