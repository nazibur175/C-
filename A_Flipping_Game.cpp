#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    int n;
    cin>>n;
    int a[n+1];
    for(int i=1;i<=n;i++) cin>>a[i];

    int pre[n+1]={0};
    int c=0;
    for(int i=1;i<=n;i++){
        if(a[i]==0) 
            c++;
        pre[i]=c;
    }
    int ans=0;
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
            int preone=(i-1)-pre[i-1];
            int postone= (n-j) - (pre[n]-pre[j]);
            ans = max(ans, preone+postone+ pre[j]-pre[i-1]);
        }
    }
    cout<<ans<<endl;

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}