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

void solve(){


}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}