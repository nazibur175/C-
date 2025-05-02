#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        int j=n;
        int ans=0;
        for(int i=1;i<=n;i++){
            ans+=abs(i-j);
            j--;
        }
        cout<<ans/2 + 1<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}