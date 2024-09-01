#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        int s,d,k;
        cin>>s>>d>>k;
        if((s+(2*d) >=k)    &&   ((s+d)*2 >=(k+1)))
        printf("Case #%d: YES\n",i);
        else 
        printf("Case #%d: NO\n",i);
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
#ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
solve();

}