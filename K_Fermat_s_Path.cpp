#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
#define double long double
double ab,bc,cz,rat;
double f(double h){
    double ad = sqrtl((ab*ab + h*h)) ;
    double cd = cz-h;
    double dz = sqrtl((cd*cd+bc*bc))*(rat);
    return ad+dz;
}
void solve(){
    test{
        cin>>ab>>bc>>cz>>rat;
        double l=0;
        double r=1e9;
        //double ternary_search(double l, double r) {
            double eps = 1e-9;             
            while (r - l > eps) {
                double m1 = l + (r - l) / 3;
                double m2 = r - (r - l) / 3;
                double f1 = f(m1);      //evaluates the function at m1
                double f2 = f(m2);      //evaluates the function at m2
                if (f1 < f2)
                    r = m2;
                else
                    l = m1;
            }
            //return f(l);                    //return the maximum of f(x) in [l, r]
        //}
        cout<<setprecision(6)<<fixed;
        cout<<r<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}