#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
int cal(int mid){
    int t = sqrtl(mid);
    while((t*t)>mid){
        t--;
    } 
    while(1){
        int temp=(t+1)*(t+1);
        if(temp>mid)
            break;
        t++;
    } 
    return mid-t;
}

void solve(){
    test{
        int n; 
        cin>>n;
        int l=1;
        int r=2e18;
        while(l<=r) {
            int mid=(l+r)/2;
            if(cal(mid)>=n) {
                r=mid-1;
            } 
            else{
                l=mid+1;
            }
    }
     cout<<r+1<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}