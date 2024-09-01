#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
string l,r;
int x;
string str;
int dp[100][2][100];
int cal(int pos,int is_small, int digsum){
    if(pos==2) return digsum==x;
    if(dp[pos][is_small][digsum]!=-1) return dp[pos][is_small][digsum];
    int low=0;
    int high=str[pos]-'0';
    if(is_small) high=9;
    int res=0;
    for(int i=low;i<=high;i++){
        is_small=is_small|(i<high);
        int val = cal(pos+1,is_small,digsum+i);
        res+=val;
    }
    return dp[pos][is_small][digsum]= res;
}
void solve(){
    cin>>l>>r>>x;
    memset(dp,-1,sizeof(dp));
    str=l;
    int left = cal(0,0,0);
    str=r;
    int right = cal(0,0,0);
    int ans=right-(left-1);
    cout<<ans<<endl;
}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}