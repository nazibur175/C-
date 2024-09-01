#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    int n,k;
    cin>>n>>k;
    int a[n]={0};
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    // int pre[n+9]={0};
    unordered_map<int,int>m;
    int pre=0;
    // m[pre]++;
    int ans = 0;
    for(int i=1;i<=n;i++){
        pre+=a[i];
        if(pre==k) ans++;
        ans+=m[pre-k];
        m[pre]++;
    }
    cout<<ans<<endl;

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}