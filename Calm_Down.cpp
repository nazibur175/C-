#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const double PI= acos(-1);
const double err=1e-7;
double R,n;
double cal(double mid){
    double theta= PI/n;
    double RR= (mid/sin(theta))+mid;
    return RR;
}
void solve(){
    int t;
    cin>>t;
    for(int tc=1;tc<=t;tc++){
        cin>>R>>n;
        double low=0;
        double high=10000;
        cout<<"Case "<<tc<<": ";
        cout<<setprecision(10)<<fixed;
        while (low<=high)
        {
            double mid = (low+high)/2.0;
            if(abs(cal(mid)-R)<=err){
                cout<<mid<<endl;
                break;
            }
            else if(cal(mid)<R){
                low=mid;
            }
            else high=mid;
        }
    }
}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}