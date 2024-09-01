#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,m;
        cin>>n>>m;
        int a[n+9];
        int sub[n+m+9]={0};
        int ans=n*m*(m+1);
        for(int i=0;i<n;i++){
            cin>>a[i];
            sub[a[i]]=m+1;
        }
        for(int i=0;i<m;i++){
            int p,v;
            cin>>p>>v;
            p--;
            sub[a[p]]-= m-i;
            sub[v]+= m-i;
            a[p]=v;
        }
        for(int i=0;i<=n+m;i++){
            ans-= sub[i]*(sub[i]-1)/2;
        }
        cout<<ans<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}