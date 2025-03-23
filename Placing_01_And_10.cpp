#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int a,b;
        cin>>a>>b;
        int mn=min(a,b);
        int sum=a+b;
        if(2*mn+1>=sum) cout<<sum<<endl;
        else{
            cout<<2*mn+1+2*(sum-(2*mn+1))<<endl;
            //cout<<mn<<"--"<<endl;
        }
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}