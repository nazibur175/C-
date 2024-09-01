#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const double eps = 1e-5;
double x=0,y=0,h=0;
double ok(double mid){
    double h1=sqrt((x*x) - (mid*mid));
    double h2=sqrt((y*y) - (mid*mid));
    double hh = (h1*h2)/(h1+h2);
    return hh;
}
void solve(){
    int t;
    cin>>t;
    for(int tc=1;tc<=t;tc++){
        cin>>x>>y>>h;
        double low=0;
        double high= min(x,y);
        double ans = 0;
        cout<<setprecision(10)<<fixed;
        cout<<"Case "<<tc<<": ";
        while (low<=high)
        {
            double mid=(low+high)/2.0 ;
            if(abs(ok(mid)-h)<=eps){
                cout<<mid<<endl;
                break;
            }
            else if(ok(mid)<h){
                high=mid;
            }
            else low=mid;
        }
        
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}