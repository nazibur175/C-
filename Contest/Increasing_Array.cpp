#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    int n;
    cin>>n;
    int a[n+9];
    for(int i=0;i<n;i++) cin>>a[i];
    int ans=0;
    for(int i=1;i<n;i++){
        if(a[i]<a[i-1]){
            int need = a[i-1] - a[i] ;
            a[i] += need;
            ans+= need;
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