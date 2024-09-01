#include<bits/stdc++.h>
using namespace std;
#define int long long 
//#define   mod             1000000007
#define test int t; cin>>t; while(t--)
string s;
int d;
int dp[(1<<10)+9][1000+9];
int cal(int bit,int mod){
    int pos=__builtin_popcount(bit);
    if(pos==s.size()) return mod==0;
    if(dp[bit][mod]!=-1) return dp[bit][mod];
    int res=0;
    for(int i=0;i<s.size();i++){
        if((1<<i)&bit) continue;
        int val = cal((1<<i)|bit , (mod*10 + s[i]-'0')%d);
        res+=val;
    }
    return dp[bit][mod]= res;
}
void solve(){
    cin>>s>>d;
    memset(dp,-1,sizeof(dp));
    int ans= cal(0,0);
    cout<<ans<<endl;
}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}