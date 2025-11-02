#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int N=1000+9;
int n,k;
int a[N];
int ok(int mid){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=min(a[i],mid);
    }
    return mid*k<=sum;
}
void solve(){
    int t;
    cin>>t;
    for(int tc=1;tc<=t;tc++){
        // int n,k;
         cin>>n>>k;
         for(int i=0;i<n;i++) cin>>a[i];
         int l=0;
         int r=1e13+9;
         while(r-l>1){
            int mid=(l+r)/2;
            if(ok(mid)){
                l=mid;
            }
            else r=mid;
         }
         cout<<"Case "<<tc<<": ";
         cout<<l<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}