#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int a,b,k;
        cin>>a>>b>>k;
        int ans=0;
        if(k==0) 
            cout<<0<<endl;
        else if(k==1) 
            cout<<a<<endl;
        else if(k==2) 
            cout<<b<<endl;
        else if(k%2==0){
            ans = (k/2)*b;
            cout<<ans<<endl;
        }
        else {
            ans = (((k-3)/2)*b) + a;
            cout<<ans<<endl;
        }
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}