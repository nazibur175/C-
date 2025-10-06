#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
struct P{
    double x, y;
    bool operator < (const P& p) const {
        return x < p.x || (x == p.x && y < p.y);
    }
    bool operator == (const P& p) const {
        return x == p.x && y == p.y;
    }
};

// Cross product of OA and OB 
int cross(const P& O, const P& A, const P& B) {
    return (A.x - O.x) * (B.y - O.y) - 
           (A.y - O.y) * (B.x - O.x);
}

//Monotone Chain
vector<P> convexHull(vector<P>& pts) {

    sort(pts.begin(), pts.end());
    pts.erase(unique(pts.begin(), pts.end()), pts.end());

    int n = pts.size();
    if (n <= 1) return pts;
    vector<P> low, up;
    // Build lower hull
    for (auto &p : pts) {
        while (low.size() >= 2 && 
               cross(low[low.size()-2], low.back(), p) <= 0)
            low.pop_back();
        low.push_back(p);
    }
    // Build upper hull
    for (int i = (int)pts.size()-1; i >= 0; i--) {
        auto p = pts[i];
        while (up.size() >= 2 && 
               cross(up[up.size()-2], up.back(), p) <= 0)
            up.pop_back();
        up.push_back(p);
    }

    low.pop_back();
    up.pop_back();
    low.insert(low.end(), up.begin(), up.end());
    return low; // counter-clockwise order
}
void solve(){
    int n;
    cin>>n;
    vector<P> pts(n);
    for(int i=0;i<n;i++){
        cin>>pts[i].x>>pts[i].y;
    }
    vector<P> hull = convexHull(pts);
    cout<<hull.size()<<endl;
    // for(auto x:hull){
    //     cout<<x.x<<" "<<x.y<<endl;
    // }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}