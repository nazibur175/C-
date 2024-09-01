#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
    int n,k,x;
    cin >>n>>k>>x;
    vector<int>a(n);
    int sum=0;
    for (int i=0;i<n;i++) {
        cin>>a[i];
        sum+=a[i];
    }
    sort(a.rbegin(),a.rend());
    for (int i=0;i<x;i++) {
        sum-=(a[i]+a[i]);
    }
    int ans=sum;
    int in=x;
    for (int i=0;i<k;i++) {
        sum+=a[i];
        if (in<n) {
            sum-=(a[in]+a[in]);
        }
        in++;
        ans=max(ans,sum);
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