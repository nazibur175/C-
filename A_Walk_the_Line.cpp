#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
void solve(){
    int t;
    cin>>t;
    for(int tt=1;tt<=t;tt++){
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        sort(a,a+n);
        int ans=0;
        if(n<=2) {
            ans = a[0];
        }
        else{
            int temp = n-2;
            ans =a[0] + temp*(a[0]*2);
        }
        //cout<<ans<<endl;
        //cout<<a[0]<<endl;
        cout<<"Case #"<<tt<<": ";
        if(ans<=k) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
//freopen("meta.in", "r", stdin);
//freopen("meta.out", "w", stdout);
solve();

}