#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    int a, b, c; 
    cin >> a >> b >> c;
    int x = sqrt((a*b)/c);
    int y = sqrt((b*c)/a);
    int z = sqrt((c*a)/b);
    cout << 4*(x+y+z) << endl;

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}