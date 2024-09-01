#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int N=1e7;
int dp[N];

void solve(){
    int n;
    cin>>n;
    for(int i=1;i<=9;i++){
        dp[i]=1;
    }
    for(int i=10;i<=n;i++){
        int num=i;

        while (num>0)
        {
            if(num%10!=0){
                if(dp[i])
                dp[i]=min(dp[i],dp[i-num%10]+1);
                else dp[i]=dp[i-num%10]+1;
            }
            num/=10;
        }
        
    }
    cout<<dp[n]<<endl;


}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}