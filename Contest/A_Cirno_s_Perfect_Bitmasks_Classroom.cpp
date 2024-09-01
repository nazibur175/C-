#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    
    test{
        int n;
        cin>>n;
        if(n==1) cout<<3<<endl;
        else if((n&(n-1))==0){
            cout<<n+1<<endl;
        }
        else {
            int x=__builtin_ctz(n);
            cout<<(1<<x)<<endl;
        }
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}