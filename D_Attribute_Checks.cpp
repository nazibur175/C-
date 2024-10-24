#include<bits/stdc++.h>
using namespace std;
//#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int N=5000+9;
int n,m;
int dp[N][N];
int ci[N][N];
int cs[N][N];
int cal(int cnt,int i){
    if(cnt==m+1) return 0;
    if(dp[cnt][i]!=-1) return dp[cnt][i];
    int ans=0;
    int s=cnt-i;
    ans+=ci[cnt][i];
    ans+=cs[cnt][s];
    ans+= max(cal(cnt+1,i),cal(cnt+1,i+1));
    return dp[cnt][i]= ans;
}
void solve(){
    cin>>n>>m;
    int cnt=0;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        if(x == 0){
            cnt++;
        } else if(x < 0){
            cs[cnt][abs(x)]++;
        } else{
            ci[cnt][x]++;
        }
    }
    // pre sum

    for(int i=0;i<=m;i++){
        for(int j=1;j<=m;j++){
            ci[i][j]+=cs[i][j-1];
            cs[i][j]+=cs[i][j-1];
        }
    }
    memset(dp,-1,sizeof(dp));
    // cal(cnt,i)
    int ans= cal(0,0);
    cout<<ans<<endl;
}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}