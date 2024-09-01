#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int N=1e4;
int dp[N][1000];
int n;
int a[N];
int cal(int pos,int cnt){
    if(pos>=n) return 0;
    if(dp[pos][cnt]!=-1) return dp[pos][cnt];
    int one=cal(pos+1,cnt+1) + (cnt+1)*a[pos];
    int two = cal(pos+1,cnt);
    //cout<<max(one,two)<<endl;
    return dp[pos][cnt]=max(one,two);
    //return max(cal(pos+1,cnt+1)+(cnt+1)*a[pos],cal(pos+1,cnt));
}
void solve(){
    memset(dp,-1,sizeof(dp));
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int ans = cal(0,0);
    cout<<ans<<endl;
}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}