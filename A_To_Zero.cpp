#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,k;
        cin>>n>>k;
        int ans=0;
        if(n%2==0){
            int a=n;
            int b=k-1;
            ans=(a+b-1)/b;
        }
        else{
            ans=1;
            int a=n-k;
            int b=k-1;
            ans+=(a+b-1)/b;
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