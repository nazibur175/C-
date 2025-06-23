#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
int n;
string L,R;
int dp[15][2][2];
int cal(int pos,int lo, int hi) {
    if(pos==n) 
        return 0;
    if(dp[pos][lo][hi]!=-1) 
        return dp[pos][lo][hi];
    dp[pos][lo][hi]=mod;
    int ll=(lo>=1) ?(L[pos]-'0'):0;
    int rr=(hi>=1) ?(R[pos]-'0'):9;
    for (int dig=ll;dig<=rr;dig++){
        int c=0;
        if(dig==L[pos]-'0')
            c++;
        if(dig==R[pos]-'0')
            c++;
        dp[pos][lo][hi]=min(dp[pos][lo][hi],
            c+cal(pos+1,lo&&(dig==L[pos]-'0'),hi&&(dig==R[pos]-'0')));
    }
    return dp[pos][lo][hi];
}
void solve(){
    test{
        cin>>L>>R;
        n=L.size();
        memset(dp,-1,sizeof(dp));
        cout<<cal(0,1,1)<<endl;
    }
}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}