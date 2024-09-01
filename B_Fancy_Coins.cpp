#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    int t;
    cin>>t;
    while (t--)
    {
        int m,k,a1,ak;
        cin>>m>>k>>a1>>ak;
        int needak=(m/k);
        int needa1=m%k;
        int needfancyak=max(1LL*0,(needak-ak));
        int needfancya1=max(1LL*0,(needa1-a1));
        int extraa1=max(1LL*0,(a1-needa1));
        int exchangable=min(extraa1/k,needfancyak);
        int ans = needfancya1+needfancyak-exchangable;
        cout<<ans<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}