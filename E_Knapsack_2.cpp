#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
int wt[105],val[105];
int dp[105][100000+5];
int n,w;
int cal(int pos,int cur_val){
    if(pos==n)
    {
        return (cur_val==0)?0:INT_MAX;
    }
    int &ans=dp[pos][cur_val];
    if(ans!=-1)
    {
        return ans;
    }
    ans=cal(pos+1,cur_val);
    if(cur_val>=val[pos])
    {
        ans=min(ans,wt[pos]+cal(pos+1,cur_val-val[pos]));
    }
    return ans;
}
void solve(){
    cin>>n>>w;
    for(int i=0;i<n;i++)
    {
        cin>>wt[i]>>val[i];
    }
    memset(dp,-1,sizeof(dp));
    for(int i=100000;i>=0;i--)
    {
        if(cal(0,i)<=w)
        {
            cout<<i<<endl;
            return;
        }
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}