#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const double eps = 1e-9;
double x,y;
double a=0,b=0;
double cal(double a){
    b = (a*y)/x;
    double r = (sqrt(b*b+a*a))/2.0;
    double theta = acos((r*r+r*r-b*b)/(2.0*r*r));
    double peri = 2*(a+(r*theta));
    return peri;
}
void solve(){
    int t;
    cin>>t;
    for(int tc=1;tc<=t;tc++){
        char ch;
        // x : y
        cin>>x>>ch>>y;
        double low=0;
        double high=500;
        cout<<"Case "<<tc<<": ";
        cout<<setprecision(8)<<fixed;
        while (low<=high)
        {
            double mid = (low+high)/2.0;
            double peri= cal(mid);
            if(abs(peri-400.00)<eps){
                a=mid;
                cout<<a<<" "<<b<<endl;
                break;
            }
            else if(peri<400.00){
                low=mid;
            }
            else high = mid;
        }
        
    }
}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}