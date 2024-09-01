#include<bits/stdc++.h>
using namespace std;
double binary_search(){

    double L = 0, R = 2e9;
        double ans = 0;
 
        while (R - L >= 1e-9) {
            double mid = (L + R) / 2.0;
            if (1/*condition*/) {
                ans = mid;
                R = mid;
            } 
            else {
                L = mid;
            }
        }
 
    return ans;

}
int main() {
    
    int ans = binary_search();
    cout<<ans<<endl;
    return 0;
}