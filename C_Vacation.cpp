#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
int n;
const int N=1e5+9;
int a[N],b[N],c[N];
int dp[N][4];
int cal(int pos,int f){
    if(pos>=n) return 0;
    if(dp[pos][f]!=-1) return dp[pos][f];
    int x=0,y=0,z=0;
    if(f!=1) x=cal(pos+1,1)+a[pos];
    if(f!=2) y=cal(pos+1,2)+b[pos];
    if(f!=3) z=cal(pos+1,3)+c[pos];
    return dp[pos][f]=max({x,y,z});
}
void solve(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i]>>c[i];
    }
    memset(dp,-1,sizeof(dp));
    int ans = cal(0,0);
    cout<<ans<<endl;

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}