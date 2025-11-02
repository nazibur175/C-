#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)

const double eps=1e-9;
const double PI=acos(-1.0);
int sign(double x){
    return (x>eps)-(x<-eps);
}
struct P{
    double x,y;
    P(){x=y=0;}
    P(double x, double y):x(x),y(y){}
    void read(){cin>>x>>y;}
    P operator + (const P &b) const{
        return P{x+b.x,y+b.y};
    }
    P operator += (const P &b){
        x+=b.x;
        y+=b.y;
    }
    P operator - (const P &b) const{
        return P{x-b.x,y-b.y};
    }
    P operator -= (const P &b){
        x-=b.x;
        y-=b.y;
    }
    bool operator == (P a) const{
        return (sign(a.x-x)==0 && sign(a.y-y)==0);
    }
    bool operator != (P a) const{
        return !(*this==a);
    }
    bool operator < (P a) const{
        return sign(a.x - x) == 0 ? y < a.y : x < a.x;
    }
    bool operator > (P a) const{
        return sign(a.x - x) == 0 ? y > a.y : x > a.x;
    }
};
double norm(P p){
    return sqrt(p.x*p.x + p.y*p.y);
}
double arg(P p){
    return atan2(p.y,p.x);
}
double dot(P a, P b){
    return a.x*b.x + a.y*b.y;
}
//euclidean distance between two points
double dist(P a, P b){
    return sqrt(dot(a-b,a-b));
}
double cross(P a, P b){
    return a.x*b.y - a.y*b.x;
}
// cross2 means cross product of vector ab and ac
double cross2(P a, P b, P c){
    return cross(b - a, c - a);
}
int orientation(P a, P b, P c){
    return sign(cross(b-a,c-a));
}
double deg_to_rad(double d){
    return d*PI/180.0;
}
double rad_to_deg(double r){
    return r*180.0/PI;
}
double get_angle(P a, P b){
    double costheta = dot(a,b)/(norm(a)*norm(b));
    return acos(max(-1.0,min(1.0,costheta)));
}

// Think about Translation A ke B er jaigai nite gele A-B 
// A er সাপেক্ষে B কে রোটেট করতে চাইলে আগে A-B then rotate it then again add B 
P rotate(P p, double theta){
    double rad = deg_to_rad(theta);
    return P{p.x*cos(rad)-p.y*sin(rad), p.x*sin(rad)+p.y*cos(rad)};
}
bool segParallel(P a, P b, P c, P d){
    return abs(cross(a-b,c-d))<eps;
}
bool pointOnSegment(P a, P b, P c){
    return sign(cross2(a,b,c))==0 && sign(dot(a-c,b-c))<=0;
}

// Returns intersection point of lines (p1,p2) and lines (p3,p4)
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

double triangleArea(P p1, P p2, P p3) {
    return fabs(p1.x*(p2.y - p3.y) + 
                p2.x*(p3.y - p1.y) + 
                p3.x*(p1.y - p2.y)) / 2.0;
}

void solve(){


}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}