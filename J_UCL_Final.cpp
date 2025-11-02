#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
int n,k;
const int N = 1e6+9;
int a[N];
int ok(int mid){
    int sum=0;
    int cnt=1;
    for(int i=0;i<n;i++){
        if(a[i]>mid){
            return 0;
        }
        sum+=a[i];
        if(sum>mid){
            sum=a[i];
            cnt++;
        }
    }
    return cnt<=k;
}
void solve(){
    cin>>n>>k;
    for(int i=0;i<n;i++) cin>>a[i];
    int l=0;
    int r= 1e13;
    if(k>n) {
        cout<<"-1"<<endl;
        return ;
    }
    while(r-l>1){
        int mid = (l+r)/2;
        if(ok(mid)){
            r=mid;
        }
        else l=mid;

    }
    cout<<r<<endl;

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}