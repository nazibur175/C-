#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("point2.in", "r", stdin);
    freopen("point2.out", "w", stdout);
    double px,py,x1,y1,x2,y2;
    cin>>px>>py>>x1>>y1>>x2>>y2;
    
    double dx = x2-x1;
    double dy = y2-y1;

    double vx = px-x1;
    double vy = py-y1;

    double dot = dx*vx + dy*vy;
    if(dot<0) cout<<"NO"<<endl;
    else{
        double mag1 = dx*dx + dy*dy;
        double mag2 = vx*vx+vy*vy;
        if (dot*dot == mag1*mag2) {
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
}