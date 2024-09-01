#include<bits/stdc++.h>
using namespace std;
//The uses of acos(-1) instead of exact pi value does not create any problem
#define pi acos(-1)
int main() {
    //Faster input output doesnot create any problem
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    // This line create a problem . 
    //#ifndef ONLINE_JUDGE
        freopen("angle1.in", "r", stdin);
        freopen("angle1.out", "w", stdout);
    //#endif
    double x,y;
    cin>>x>>y;
    double angle = atan2(y, x);
    if (angle<0) {
        angle += 2 * pi;
    }
    //endl does not create problem
    //More setprecision value does not create any problem
    cout << setprecision(10) << fixed << angle <<endl;
    return 0;
}
