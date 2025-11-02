#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
#define PI acos(-1.0)
typedef double T;

struct P{
    T x,y;
    void read(){
      cin>>x>>y;  
    }
    P operator -(const P &p){
        return {x-p.x, y-p.y};
    }
};
T dot(P x, P y){
    return x.x*y.x + x.y*y.y;
}
T cross(P x, P y){
    return x.x*y.y - x.y*y.x;
}
T norm(P x){
    return sqrt(dot(x,x));
}
T angle(P x, P y){
    return acos(clamp(dot(x,y)/norm(x)/norm(y),(double)-1.0,(double)1.0));
}
T area_of_polygon(vector<P>&v){
    T area=0;
    for(int i=1;i<v.size()-1;i++){
        area+=cross(v[i]-v[0],v[i+1]-v[0]);
    }
    return area/2.0;
}
void solve(){
    // int n;
    // cin>>n;
    vector<P>v;
    for(int i=0;i<3;i++){
        P x;
        x.read();
        v.push_back(x);
    }
    T ans=abs(area_of_polygon(v));
    cout<<setprecision(10)<<fixed;
    cout<<ans<<endl;

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
freopen("area1.in","r",stdin);
freopen("area1.out","w",stdout);
solve();

}