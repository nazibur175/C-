#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
#define pi 3.141592653589793238462643
void solve(){
    test{
        double n;
        cin>>n;
        double r = sqrt(n)/2.0;
        double area= n-(pi*(r*r));
        printf("%.16lf %.16lf\n",area,2*pi*r);
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}