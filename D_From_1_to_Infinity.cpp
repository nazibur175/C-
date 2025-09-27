#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int N=17;
int dp[N];
int cal(int pos){
    if(pos<=0) return 0;
    if(dp[pos]!=0) return dp[pos];
    int ans=0;
    for(int i=0;i<=9;i++){
        ans+=cal(pos-1)+i;
    }
    return dp[pos]=ans;
}
void solve(){
    memset(dp, 0, sizeof(dp));
    cal(N-1);
    test{
        int n;
        cin>>n;
        int dig=0;
        int start=1;
        int end=0;
        int cnt=0;
        int extra=0;
        int ans=0;
        while(1){
            cnt++;
            end=start*10-1;
            int cnt_num= end-start+1;
            int cnt_dig=cnt_num*cnt;
            if((dig+cnt_dig)>n){
                extra=n-dig;
                for(int i=start;i<=end;i++){
                    if(extra==0) break;
                    int temp=i;
                    while(temp>0 && extra>0){
                        ans+=temp%10;
                        temp/=10;
                        extra--;
                    }
                }
                break;
            }
            dig+=cnt_dig;
        
            start*=10;
        }
        cout<<ans+cal(cnt-1)<<'\n';
    }
}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}