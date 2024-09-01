#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int x,y;
        cin>>x>>y;
        int sum=x+y;
        if(x==0) cout<<"Bob"<<endl;
        if(sum%2==0) cout<<"Bob"<<endl;
        else cout<<"Alice"<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}