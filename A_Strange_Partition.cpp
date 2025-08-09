#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,k;
        cin>>n>>k;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        int mn=0;
        int mx=0;
        int sum=0;
        for(int i=0;i<n;i++){
            mx+=(a[i]+k-1)/k;
            sum+=a[i];
        }
        mn=(sum+k-1)/k;
        cout<<mn<<" "<<mx<<"\n";
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}