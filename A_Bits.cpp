#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int a,b;
        cin>>a>>b;
        for(int i=1;(a|i)<=b;a|=i,i<<=1);
        cout<<a<<'\n';
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}