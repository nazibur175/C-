#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        int a[n+1];
        for(int i=1;i<=n;i++) cin>>a[i];
        int pre[n+2]={0};
        pre[n+1]=1e18;
        pre[n]=a[n];
        for(int i=n-1;i>=1;i--){
            pre[i]=min(pre[i+1],a[i]);
        }
        int mn=1e18;
        for(int i=1;i<=n;i++){
            if(a[i]>pre[i+1] || a[i]>mn){
                a[i]++;
                mn=min(mn,a[i]);
            }
        }
        sort(a+1,a+n+1);
        for(int i=1;i<=n;i++){
            cout<<a[i];
            if(i<n) cout<<" ";
        }
        cout<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}