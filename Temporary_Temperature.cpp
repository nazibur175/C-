#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
int n,k;
int ok(int mid,int a[]){
    int cnt=0;
    int mn,mx;
    for(int i=0;i<n;i++){
        if(i==0){
            mn=a[i];
            mx=a[i];
        }
        else{
            mn=min(mn,a[i]);
            mx=max(mx,a[i]);
            // ceil
            int temp = (mx-mn)/2;
            if((mx-mn)%2) temp++;
            if(temp>mid){
                cnt++;
                mn=a[i];
                mx=a[i];
            }
        }

    }
    return cnt<=k;
}
void solve(){
    test{
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int l=-1;
        int r=1e10;
        while (r-l>1)
        {
            int mid = (l+r)/2;
            if(ok(mid,a)){
                r=mid;
            }
            else{
                l=mid;
            } 
        }
        cout<<r<<endl;
        //cout<<ok(0,a)<<endl;
    }


}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}