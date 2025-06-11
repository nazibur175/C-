#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int N=5e3+5;
int dp[N][N];
int a[N];
int n;
int cal(int pos,int cur_gc, int target_gc){
    if(pos==n) return cur_gc==target_gc ? 0 : INT_MAX;
    if(dp[pos][cur_gc] != -1) return dp[pos][cur_gc];
    int ans = cal(pos+1, cur_gc, target_gc);
    ans=min(ans, 1 + cal(pos+1,__gcd(cur_gc, a[pos]), target_gc)); 
    return dp[pos][cur_gc] = ans;
}
void solve(){
    int t;
    cin>>t;
    for(int tc=1;tc<=t;tc++){
        cin>>n;
        for(int i=0;i<=n;i++){
            for(int j=0;j<=N;j++){
                dp[i][j] = -1;
            }
        }
        for(int i=0;i<n;i++) cin>>a[i];
        int target_gc = a[0];
        for(int i=1;i<n;i++) 
            target_gc = __gcd(target_gc,a[i]);
        map<int,int>m;
        for(int i=0;i<n;i++){
            m[a[i]]++;
        }
        if(m[target_gc]){
            int ans= n-m[target_gc];
            cout<<ans<<endl;
        }
        else{
            //cout<<"Case #"<<tc<<": "<<target_gc<<endl;
            //cout<<cal(0,0,target_gc)<<endl;
            int ans= n + cal(0, 0, target_gc) - 2;
            cout<<ans<<endl;
        }
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}