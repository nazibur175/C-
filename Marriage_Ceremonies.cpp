#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int N=17;
int a[N][N];
int dp[N][1ll<<N];
int n;
int cal(int i,int mask){
    if(mask==(1ll<<n)-1){
        return 0;
    }
    if(dp[i][mask]!=-1){
        return dp[i][mask];
    }
    int ans=0; 
    for(int j=0;j<n;j++){
        if((mask&(1ll<<j))==0){
            ans=max(ans,a[i][j]+cal(i+1,mask|(1ll<<j)));
        }
    }
    return dp[i][mask]=ans;
}
void solve(){
    int t;
    cin>>t;
    for(int tt=1;tt<=t;tt++){
        memset(dp,-1,sizeof(dp));
        cin>>n;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>a[i][j];
            }
        }
        cout<<"Case "<<tt<<": ";
        cout<<cal(0,0)<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}