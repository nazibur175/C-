#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
string s;
int dp[101][101];
int cal(int i,int j){
    if(i>j) return 0;
    if(i==j) return 1;
    if(dp[i][j]!=-1) return dp[i][j];
    if(s[i]==s[j]){
        return dp[i][j]=1+cal(i+1,j)+cal(i,j-1);
    }
    else{
        return dp[i][j]=cal(i+1,j)+cal(i,j-1)-cal(i+1,j-1);
    }
}
void solve(){
    int t;
    cin>>t;
    for(int tt=1;tt<=t;tt++){
        cin>>s;
        int n=s.size();
        memset(dp,-1,sizeof(dp));
        cout<<"Case "<<tt<<": ";
        cout<<cal(0,n-1)<<"\n";
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}