#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];

        sort(a,a+n);
        for(int i=1;i<n;i++){
            a[i]=a[i]-a[0];
        }

        k=k-a[0];
        int gc=0;
        for(int i=1;i<n;i++){
            gc=gcd(gc,a[i]);
        }
        if(k%gc==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}