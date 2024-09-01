#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    int n,b,h;
    cin>>n>>b>>h;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];

    double ans = ((b*h)/2.0)*n;
    for(int i=1;i<n;i++){
        if(a[i]-a[i-1]>=h) continue;
        else {
            int height= a[i-1]+h -a[i];
            double avg= b/(h*1.0) ;
            double base = height*avg;
            ans-=(base*height)/2.0;
        }
    }
    cout<<setprecision(7)<<fixed<<ans<<endl;
    //cout<<ans<<endl;

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
    test{
        solve();
    }

}