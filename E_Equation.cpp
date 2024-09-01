#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
double n;
int ok(double  x){
    double a = x*x;
    double b = sqrt(x);
    if((a+b)>=n) return 1;
    else return 0;
}
void solve(){
    //double n;
    cin>>n;
    double l=0;
    double r=1e5;
     while ((r-l)>=0.0000001)
     {
         double mid = (l+r)/2.0;
         if(ok(mid)){
             r=mid;
         }
         else l=mid;
     }
    cout<<setprecision(16)<<r<<endl;
    

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}