#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
int n,k;
int ok(int v){
    int sum=v;
    for(int i=1;i<=32;i++){
        int x=pow(k,i);
        sum+= v/(x);
    }
    return sum;
}
void solve(){
    cin>>n>>k;
    int l=0;
    int r=n+9;
    int ans = 0;
    while (l<r)
    {
        int mid = (l+r)/2;
        if(ok(mid)<n){
            l=mid+1;
        }
        else if(ok(mid)>=n){
            r=mid;
            ans=mid;
        }
    }
    cout<<ans<<endl;
}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}