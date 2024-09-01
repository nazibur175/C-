#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
int n;
const int N=(1<<10) + 10;
int dp[1000][N];
int isall(int b){
    int f=1;
    for(int i=0;i<10;i++){
        if(((1<<i)&b)==0){
            f=0;
            break;
        }
    }
    return f;
}
int cal(int pos,int bit){
    if(pos>=n){
        return isall(bit);
    }
    if(dp[pos][bit]!=-1) return dp[pos][bit];
    int res=0;
    for(int i=0;i<10;i++){
        if(pos==0 && i==0) continue;
        int val = cal(pos+1,((1<<i)|bit));
        res+=val;
    }
    return dp[pos][bit]= res;
}
void solve(){
    cin>>n;
    memset(dp,-1,sizeof(dp));
    int ans=cal(0,0);
    cout<<ans<<endl;
}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}