#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)

void solve(){
    test{
       int a,b,c;
       cin>>a>>b>>c;
       int aa=abs(b-c);
       int bb=abs(a-c);
       int cc=abs(a-b);
       cout<<((aa%2)^1)<<" "<<((bb%2)^1)<<" "<<((cc%2)^1)<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}