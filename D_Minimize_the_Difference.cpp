#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int N=2e5+9;
const int inf = 1e13;
int a[N];
int n;
// min ke maximize 
int ok1(int mid){
    int sum=0;
    for(int i=0;i<n;i++){
        if(a[i]>mid && i!=n-1){
            sum+=(a[i]-mid);
        }
        else {
            int lagbe = mid - a[i];
            sum-=lagbe;
            if(sum<0) return false;
            }
        }
    if(sum>=0) return true;
    else return false;
}
int ok2(int mid){
    int sum=0;
    for(int i=0;i<n;i++){
        if(a[i]>mid){
            sum+=(a[i]-mid);
        }
    
        else if(sum) {
                
                int lagbe = mid - a[i];
                sum-=lagbe;
                sum = max(sum,0ll);
                //if(sum<0) return false;
            }
        }
    if(sum==0) return true;
    else return false;
}

void solve(){
    test{
        cin>>n;
        for(int i=0;i<n;i++) cin>>a[i];
        int l=0;
        int r= inf;
        // min maximize korte 
        while (r-l>1)
        {
            int mid = (l+r)/2;
            if(ok1(mid)){
                l=mid;
            }
            else r=mid;
        }
        int mn = l;

        l=0;
        r=inf;
        while (r-l>1)
        {
            int mid = (l+r)/2;
            if(ok2(mid)){
                r=mid;
            }
            else l=mid;
        }
        int mx=r;
        cout<<mx-mn<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}