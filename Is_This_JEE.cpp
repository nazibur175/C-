#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
// f(x) = (x*x + b*x + c) / sin(x)
#define pi acos(-1)
 double b,c;
double cal(double i){
    double ans = (i*i + b*i + c) / sin(i);
    return ans;
}
double cal_rad(double i){
    return (i*(pi)/180);
}
void solve(){
    test{
       
        cin>>b>>c;
        double l=1;
        double r=89;

        double eps = 1e-8;
        while (r-l>eps)
        {
            double mid1 = l+ (r-l)/3;
            double mid2 = r - (r-l)/3;
            if(cal(cal_rad(mid1)) < cal(cal_rad(mid2))){
                r=mid2;
            }
            else l = mid1;
        }
        double ans = cal(cal_rad(l));
        cout<<setprecision(10)<<fixed;
        cout<<ans<<endl;
        
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}