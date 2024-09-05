#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int N = 2e5;
int a[N];
int b[N];
   int n,m;
int cal(int level){
    int total=0;
    for(int i=0;i<n;i++){
        if(a[i]<level){
            total+= (level-a[i]);
        }
    }
    for(int i=0;i<m;i++){
        if(b[i]>level){
            total+=b[i]-level;
        }
    }
    return total;
}
void solve(){
 
    cin>>n>>m;
    for(int i=0;i<n;i++) cin>>a[i];
    for(int j=0;j<m;j++) cin>>b[j];
    int l=0;
    int r=1e10;
    while (r-l>3)
    {
        int mid1 = l+ (r-l)/3;
        int mid2 = r- (r-l)/3;
        if(cal(mid1)<cal(mid2)){
            r=mid2;
        }
        else l=mid1;
    }
    int ans = INT64_MAX;
    for(int i=l;i<=r;i++){
        ans=min(ans,cal(i));
    }
    cout<<ans<<endl;
    


}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}