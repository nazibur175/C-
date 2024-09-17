#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
int n,m;
string s[1004];
string temp="narek";
int dp[1001][5];
int cal(int ith, int pos){
    if(ith==n) return -pos;
    if(dp[ith][pos]!=-1e15) return dp[ith][pos];
    int loss=0;
    int gain=0;
    int now=pos;
    for(auto z:s[ith]){
        if(z==temp[now]){
            now++;
            if(now==5){
                now=0;
                gain+=5;
            }
            continue;
        }
        for(auto x:temp){
            if(x==z) loss++;
        }
    }
    int ans = max(cal(ith+1,pos), gain-loss + cal(ith+1, now));
    return dp[ith][pos]= ans;
}
void solve(){
    test{
        //memset(dp,-1,sizeof(dp));

        cin>>n>>m;
        for(int i=0;i<n;i++) cin>>s[i];
        for(int i=0;i<n;i++){
            for(int j=0;j<5;j++){
                dp[i][j]=-1e15;
            }
        }
        int ans = cal(0,0);
        cout<<ans<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}