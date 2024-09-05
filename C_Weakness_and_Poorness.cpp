#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
int n;
const int N=2e5+9;
int a[N];
double cal(double x){
    double b[n]={0};
    for(int i=0;i<n;i++){
        b[i]= a[i]-x;
    }

    double cursum1=0;
    double pos_max = 0;

    double cursum2=0;
    double neg_min = 0;
    for(int i=0;i<n;i++){
        cursum1=max(0.0,cursum1+b[i]);
        pos_max = max(pos_max,cursum1);

        cursum2=min(0.0,cursum2+b[i]);
        neg_min= min(neg_min,cursum2);
    }
    return max(pos_max,neg_min*(-1.0));
}
void solve(){

    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    //cout<<cal(1000)<<endl;
    //cout<<cal(-100000)<<endl;
    double l=-1e12;
    double r=1e12;
    //double eps = 1e-10;
    int cnt =0;
    while (cnt<500)
    {
        double mid1= l+ (r-l)/3.0;
        double mid2= r- (r-l)/3.0;
        if(cal(mid1) < cal(mid2)){
            r=mid2;
        }
        else l=mid1;
        cnt++;
    }
    double ans = cal(l);
    cout<<setprecision(8)<<fixed;
    cout<<ans<<endl;

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}