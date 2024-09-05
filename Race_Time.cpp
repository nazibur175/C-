#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int N = 2e5;
int s[N];
int d[N];
int n;
double getdiff(double k){
    double mn= INT64_MAX;
    double mx = INT64_MIN;
    for(int i=0;i<n;i++){
        double val = s[i]*k + d[i];
        mn=min(mn,val);
        mx=max(mx,val);
    }
    return mx-mn;
}
void solve(){
    int k;
    cin>>n>>k;
    for(int i=0;i<n;i++) cin>>s[i]>>d[i];

    double l=0;
    double r=k;

    double eps = 1e-9;
    while (r-l>eps)
    {
        double mid1 = l + (r-l)/3;
        double mid2 = r - (r-l)/3;
        if(getdiff(mid1) < getdiff(mid2)){
            r=mid2;
        }
        else l=mid1;
    }
    double ans = getdiff(l);
    cout<<setprecision(6)<<fixed;
    cout<<ans<<endl;
    
}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}