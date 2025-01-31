#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             7
#define test int t; cin>>t; while(t--)
int gcd(int a, int b, int& x, int& y) {
    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    }
    int x1, y1;
    int d = gcd(b, a % b, x1, y1);
    x = y1;
    y = x1 - y1 * (a / b);
    return d;
}
void solve(){
    // 12x + 15y =3
    // 4x = 1 mod 7
    // 4x + 7y=1 mod7
    int x,y;
    int a=4;
    int b=7;
    int gc=gcd(a,b,x,y);
    cout<<x<<endl;
    cout<<y<<endl;
    cout<<gc<<endl;

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}