#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int B=60;
const int inf=1e18;
int dp[B][B][B];
int cal(int pos,int x,int y){
    if(x==0 && y==0) return 0LL;
    if(pos<0) return inf;
    if(dp[pos][x][y]!=-1) return dp[pos][x][y];
    dp[pos][x][y]=cal(pos-1,x,y);
    if(x-pos>=0) dp[pos][x][y]=min(dp[pos][x][y],cal(pos-1,x-pos,y)+(1ll<<pos));
    if(y-pos>=0) dp[pos][x][y]=min(dp[pos][x][y],cal(pos-1,x,y-pos)+(1ll<<pos));
    return dp[pos][x][y];
}
void solve(){
    
    memset(dp,-1,sizeof(dp));
    test{
        int a,b;
        cin>>a>>b;
        int ans=1e18;
        for(int i=0;i<B;i++){
            for(int j=0;j<B;j++){
                if((a>>i) == (b>>j)){
                    ans=min(ans,cal(59,i,j));
                }
            }
        }
        cout<<ans<<endl;
        }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}