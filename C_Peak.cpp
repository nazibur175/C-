#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
int solve(){
    int n,m;
    cin>>n>>m;

    // int a[n];
    vector<int>a(n,0);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    if(n==1){
        cout<<1<<endl;
        return 0;
    }
    sort(a.begin(),a.end());
    int ans=0;
    for(int i=0;i<n;i++){
        int x=a[i]+m-1;
        int in=upper_bound(a.begin(),a.end(),x)-a.begin();
        ans=max(ans,in-i);
    }
    cout<<ans<<endl;
    return 0;

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}