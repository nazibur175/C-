#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int N=1e3+9;
char a[N][N];
int n;
int dp[N][N];
int cal(int x,int y){
    if(a[x][y]=='*') return 0;
    else if(x==n-1 && y==n-1 ){
        return 1;
    }
    else if(dp[x][y]!=-1) return dp[x][y];
    int temp=0;
    if((y+1)<n && a[x][y+1]!='*'){
        temp = cal(x,y+1);
        temp%=mod;
    }
    if((x+1)<n && a[x+1][y]!='*'){
        temp+=  cal(x+1,y);
    } 
        
    return dp[x][y]= temp%mod;
}
void solve(){

   memset(dp,-1,sizeof(dp));
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
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