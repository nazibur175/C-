#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int N = 1e7+9;
int dp[N];
void solve(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int ans = (b-a+1) *(d-c+1);
 
    for(int i=d;i>=2;i--){
        int r1=b/i-(a-1)/i;
        int r2 =d/i-(c-1)/i;
        int cnt =r1*r2;
        for(int j=2*i;j<=d;j+=i){
            cnt-=dp[j];
        }
        dp[i]=cnt;
        ans-=cnt;
    }
    cout<<ans<<endl;

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}