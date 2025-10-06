#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
struct P{
    int x, y;
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

    int q;
    cin>>q;
    vector<P> hull,temp;
    while(q--){
        int type,x,y;
        cin>>type>>x>>y;
        if(type==1){
            temp.push_back({x,y});
            hull=convexHull(temp);
            temp=hull;
        }
        else {
            P p;
            p.x=x;
            p.y=y;
            if(cross(hull[0],hull[1],p)<0 || cross(hull[0],hull.back(),p)>0) {
                cout<<"NO"<<endl;
                continue;
            }
            int l=0,r=hull.size()-1;
            bool f=0;
            while(r-l>1){
                int mid=(l+r)/2;
                if(cross(hull[0],hull[mid],p)>=0) l=mid;
                else r=mid;
            }
            if(cross(hull[l],hull[l+1],p)>=0) {
                cout<<"YES"<<endl;
            }
            else cout<<"NO"<<endl;

        }
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}