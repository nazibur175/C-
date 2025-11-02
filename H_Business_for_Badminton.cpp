#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int N=1e5+9;
int dp[N][2];
int a[N];
int n;
int cal(int pos,int f){
    if(pos>=n) return 0;
    if(dp[pos][f]!=-1) return dp[pos][f];
    int ans = -1e16;
    if(f){
        ans=max(ans, a[pos]+cal(pos+2,0));
    }
    else {
        ans=max(ans, -a[pos]+cal(pos+1,1));
    }
    ans=max(ans,cal(pos+1,f));
    return dp[pos][f]=ans;
}
void solve(){
    cin>>n;
    for(int i=0;i<=n;i++){
        for(int j=0;j<2;j++){
            dp[i][j]=-1;
        }
    }
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<cal(0,0)<<endl;

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}