#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define endl '\n'
int n;
int dp[50][5]; 
int cal(int pos,int pre){
    if(pos>n) return 1;
    int res=0;
    if(dp[pos][pre]!=-1) return dp[pos][pre];
    if(pre==3)res+=cal(pos+1,1);
    else{
        if(pre!=1) res+=cal(pos+1,1);
        if(pre!=2) res+=cal(pos+1,2);
        if(pre!=3 && pos!=1 && pos!=n)res+=cal(pos+1,3);
    }
    return dp[pos][pre]= res;
}
void solve(){
    
    cin>>n;
    // 1- white, 2-red, 3-blue
    memset(dp,-1,sizeof(dp));
    int ans=cal(1,4);
    cout<<ans<<endl;

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}