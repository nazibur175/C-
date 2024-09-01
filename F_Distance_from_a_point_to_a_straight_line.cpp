#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("distance2.in", "r", stdin);
    freopen("distance2.out", "w", stdout);
    int x,y,x1,y1,x2,y2;
    cin>>x>>y>>x1>>y1>>x2>>y2;
    int a = y1-y2;
    int b = x2-x1;
    int c= y1*(x1-x2) - x1*(y1-y2) ;
    double ans = abs(a*x + b*y + c)/(sqrt(a*a + b*b));
    cout<<setprecision(10)<<fixed<<ans<<endl;
    return 0;
}