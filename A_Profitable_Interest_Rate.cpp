#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int a,b;
        cin>>a>>b;
        if(a>=b){
            cout<<a<<endl;
        }
        else {
            int dif= b-a;
            int lagbe = dif;
            cout<<max(0ll,a-lagbe)<<endl;
        }
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}