#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const double PI=acos(-1);
struct P{
    double x,y;
    P(){x=y=0;}
    P(double x, double y):x(x),y(y){}
    void read (){cin>>x>>y;}
    P operator +(const P &b) const {
        return P{x + b.x, y + b.y};
    }
    P operator -(const P &b) const {
        return P{x - b.x, y - b.y};
    }

};

// Returns intersection point of lines (p1,p2) and (p3,p4)
P lineIntersection(P p1, P p2, P p3, P p4) {
    // Line AB represented as a1x + b1y = c1
    double a1 = p2.y - p1.y;
    double b1 = p1.x - p2.x;
    double c1 = a1 * p1.x + b1 * p1.y;

    // Line CD represented as a2x + b2y = c2
    double a2 = p4.y - p3.y;
    double b2 = p3.x - p4.x;
    double c2 = a2 * p3.x + b2 * p3.y;
    double det = a1 * b2 - a2 * b1;

    if (fabs(det) < 1e-9) {
        // Lines are parallel or coincident; return a "NaN" point
        return {-mod,-mod};
    }
    double x = (b2 * c1 - b1 * c2) / det;
    double y = (a1 * c2 - a2 * c1) / det;
    return {x, y};
}

double deg_to_rad(double d){
    return d*PI/180.0;
}
P rotate(P p, double theta){
    double rad = deg_to_rad(theta);
    return P{p.x*cos(rad)-p.y*sin(rad),p.x*sin(rad)+p.y*cos(rad)};
}
double triangleArea(P p1, P p2, P p3) {
    return fabs(p1.x*(p2.y - p3.y) + 
                p2.x*(p3.y - p1.y) + 
                p3.x*(p1.y - p2.y)) / 2.0;
}
void solve(){
    test{
        int s,x;
        cin>>s>>x;
        x=x%90;
        if(x==0){
            cout<<s*s<<endl;
            continue;
        }
        P a,b,c,d;
        a={0,s};
        b={s,s};
        c={0,0};
        d={s,0};
        
        P e,f;
        P center={s/2.0,s/2.0};
        e=rotate(a-center,x);
        f=rotate(b-center,x);
        e=e+center;
        f=f+center;

        P intersect1,intersect2;
        intersect1 = lineIntersection(e,f,a,c);
        intersect2 = lineIntersection(e,f,a,b);
        cout<<setprecision(4)<<fixed;
        double ans = s*s + 4.0*triangleArea(a,intersect1,intersect2);
        cout<<ans<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}