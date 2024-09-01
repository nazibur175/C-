#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
int n,k;
int c(double x,int a[]){
    int cnt=0;
    for(int i=0;i<n;i++){
        cnt+=(a[i]*1.0)/x;
    }
    if(cnt>=k) return 1;
    else return 0;

}
void solve(){
    //int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    double l=0;
    double r=1e7;
    //cout<<c(r,a)<<endl;
     while ((r-l)>=0.0000001)
     {
         double mid = (l+r)/2.0;
         //cout<<mid<<endl;
         if(c(mid,a)){
             l=mid;
            }
         else r=mid;
     }
     cout<<setprecision(16)<<r<<endl;
    
    

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}