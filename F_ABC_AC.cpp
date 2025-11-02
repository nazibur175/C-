#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    string x, y;
    cin >> x >> y;
    int a = 0, b = 0;
    if(x == "Serval") a = 2;
    if(x == "Ocelot") a = 1;
    if(x == "Lynx") a = 3;
    if(y == "Serval") b = 2;
    if(y == "Ocelot") b = 1;
    if(y == "Lynx") b = 3;
    cout << ((a >= b)?"Yes":"No") << endl;

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}