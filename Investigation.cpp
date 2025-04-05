#include<bits/stdc++.h>
using namespace std;
#define int long long 
// #define   mod             1000000007
#define test int t; cin>>t; while(t--)
int dp[10][2][100][100];
int l,r,k;
int cal(int pos,int is_small,int sum,int mod,string s){
    if(pos==s.size()){
        if(sum==0 && mod==0){
            return 1;
        }
        else return 0;
    }
    if(dp[pos][is_small][sum][mod]!=-1){
        return dp[pos][is_small][sum][mod];
    }
    int limit = is_small?9:s[pos]-'0';
    int ans = 0;
    for(int i=0;i<=limit;i++){
        ans+=cal(pos+1,is_small|(i<s[pos]-'0'),(sum+i)%k,(mod*10+i)%k,s);
    }
    return dp[pos][is_small][sum][mod] = ans;
}
int convert(int n){
    string s = to_string(n);
    memset(dp,-1,sizeof(dp));
    return cal(0,0,0,0,s);
}
void solve(){
    int t;
    cin>>t;
    for(int tt=1;tt<=t;tt++){
        cin>>l>>r>>k;
        cout<<"Case "<<tt<<": ";
        if(k>100){
            cout<<0<<endl;
            continue;
        }
        memset(dp,-1,sizeof(dp));
        int ans1 = convert(r);
        memset(dp,-1,sizeof(dp));
        int ans2 = convert(l-1);
        int ans= ans1-ans2;
        cout<<ans<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}