#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++) cin>>a[i];
    int pre[n+1]={0};
    for(int i=1; i<=n; i++) pre[i] = pre[i-1] + a[i-1];
    int q;
    cin>>q;
    while (q--)
    {
        int l,r;
        cin>>l>>r;
        l++,r++;
        cout<<pre[r] - pre[l-1]<<endl;
    }
    

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}