#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
#define double long double
const int N = 1e5 + 9;
double calculateTax(double mid){
    double tex=0;
    if(mid>=0){
        tex+=0;
    }
    if(mid>(double)12500.0){
        double temp =min((double)50000.0,mid)-(double)12500.0;
        tex+= temp*((double)20.00000/(double)100.0000);
    }
    if(mid>(double)50000.0){
        double temp =min((double)150000.0,mid)-(double)50000.0;
        tex+= temp*((double)40.0/(double)100.0);
    }
    if(mid>(double)150000.0){
       double temp = mid-(double)150000.00;
        tex+= temp*((double)45.0/(double)100.0);
    }
    if(mid>(double)100000.0){
        double temp = mid-(double)100000.00;
        temp/=(double)2.0000;
        temp= min((double)12500.00,temp);
        tex+= temp*((double)40.0/(double)100.0);
    }
    return tex;
}
double binarySearch(double target) {
        double low = 12500;
        double high = 3e9;
        int iterations = 60;
        while(low <= high && iterations-- > 0) {
        double mid = (low + high) / 2;
        double tax = calculateTax(mid);
        if(tax > target) {
        high = mid;
        } else {
        low = mid;
        }
    }
    return low;
 }
void solve(){
    int t;
    cin >> t;
    for(int tc = 1; tc <= t; tc++){
        // int ans = 0;
        double x;
        cin>>x;
        cout<<setprecision(6)<<fixed;
        // cout << "Case " << tc << ": ";
        if(x==0) cout<<0<<endl;
        else{
            double ans = binarySearch(x);
            cout<<ans<<endl;
            // cout<<calculateTax(ans)<<endl;
        }
            
    
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}