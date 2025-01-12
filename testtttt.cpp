#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
int lcm(int x,int y){
    return x*y/ gcd(x,y);
}
void solve(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int ans=0;

    for(int j=0;j<n;j++){
        for(int k=0;k<n;k++){
            ans+=lcm(a[j],a[k]);
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