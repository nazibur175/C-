#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
int is(int n){
    int x = sqrt(n);
    if(x*x==n) return 1;
    else return 0;
}
void solve(){
    int n;
    cin>>n;
    int ans = INT64_MIN;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(is(x)==0){
            ans= max(ans,x);
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