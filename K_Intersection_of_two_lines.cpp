#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("intersec1.in", "r", stdin);
    freopen("intersec1.out", "w", stdout);
    int a1,b1,c1,a2,b2,c2;
    cin>>a1>>b1>>c1>>a2>>b2>>c2;
    double x = (b1*c2-b2*c1)/((a1*b2-a2*b1)*1.0);
    double y = (a2*c1-a1*c2)/((a1*b2-a2*b1)*1.0);
    cout<<setprecision(10)<<fixed<<x<<" "<<y<<endl;
}