#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int N = 1e3+9;
const int mxsum= 8e3+9;
int dp[N][mxsum][5];
int a[N];
int n;
int cal(int pos,int cur_sum,int c){
    if(pos==n){
        if(cur_sum==0 && c==4) return 1;
        else return 0;
    }
    if(c>4) return 0;
    if(cur_sum<0) return 0;

    if(dp[pos][cur_sum][c]!=-1) return dp[pos][cur_sum][c];
    int ans= cal(pos+1, cur_sum-a[pos] , c+1) + cal(pos+1, cur_sum, c);
    return dp[pos][cur_sum][c]=ans;
}
void solve(){
    
    cin>>n;
    memset(dp,-1,sizeof(dp));
    for(int i=0;i<n;i++){
        cin>>a[i];
        a[i]+=1e3;
        
    }
    int extra = 4*1000;
    int q;
    cin>>q;
    while (q--)
    {
        int x;
        cin>>x;
        cout<<cal(0,x+extra,0)<<endl;
    }
    
}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}