#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int temp = 1;
    for(int i=0;i<n;i++){
        if(a[i]==temp) temp++;
    }
    int cnt = n - (temp-1);
    int ans = ceil(cnt/(k*1.0));

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}