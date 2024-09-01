#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    int a,b,c;
    cin>>a>>b>>c;
    int ans = INT64_MAX;
    for(int i=1;i<=100;i++){
        int x = abs(a-i) + abs(b-i) + abs(c-i);
        ans=min(ans,x);
    }
    cout<<ans<<endl;

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}