#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int N=1e7;
int dp[N];
//using 1 to 6
int dice(int n){
    if(n==1) return 1;
    else if(n==2) return 2;
    else if(n==3) return 4;
    else if(n==4) return 8;
    else if (n==5) return 16;
    else if(n==6) return 32;
    if(dp[n]!=-1) return dp[n];
    int c=0;
    for(int i=1;i<=6;i++){
        //if(n-i>=1)
         c+=dice(n-i);
         c = c % mod;
    }
    return dp[n]=c;
}
void solve(){
    int n;
    cin>>n;
    memset(dp,-1,sizeof(dp));
    cout<<dice(n)<<endl;
}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();


}