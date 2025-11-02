#include<bits/stdc++.h>
using namespace std;
// #define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
int n;
const int inf= 1e14;
const int N = 8000+2;
// pos, last_in, flag
#define ll long long int
int a[N];
int b[N];
ll dp[N][N];
ll cal(int pos,int last_in){
    if(pos>n) return 0ll;

    if(dp[pos][last_in]!=-1) return dp[pos][last_in];
    ll ans=inf;
    if(a[pos]>=a[last_in]){
        // jodi kori
        ans = min(ans, b[pos]+cal(pos+1,last_in));
        // na korle
        ans = min(ans, cal(pos+1,pos));
    }
    else {
        ans = min(ans, b[pos]+cal(pos+1,last_in));
    }
    return dp[pos][last_in]=ans;

}
void solve(){
    test{
        cin>>n;
        for(int i=0;i<=n+5;i++){
            for(int j=0;j<=n+5;j++){
                dp[i][j]=-1;
            }
        }
        a[0]=0ll;
        b[0]=0ll;
        for(int i=1;i<=n;i++) cin>>a[i];
        for(int i=1;i<=n;i++) cin>>b[i];
        int ans= cal(0,0);
        cout<<ans<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}