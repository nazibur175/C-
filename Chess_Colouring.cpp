#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
int dp[1000001];
void solve(){
    test{
        int n;
        cin>>n;
        int x = n*n;
        int temp = x/2;
        int ans = x-temp;
        ans++;
        if(n%2==0) ans=2;
        cout<<ans<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}