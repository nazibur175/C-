#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        int x,y;
        cin>>x>>y;
        double ans = ceil((n*1.0)/(min(x,y)*1.0));
        int a=ans;
        cout<<a<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}