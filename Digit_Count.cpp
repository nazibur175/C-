#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
int m,n;
int dp[11][11];
vector<int>v;
int cal(int pos,int prev){
    if(pos==n){
        return 1;
    }
    if(dp[pos][prev]!=-1){
        return dp[pos][prev];
    }
    int ans=0;
    for(int i=0;i<m;i++){
        if(abs(v[i]-prev)<=2){
            ans+=cal(pos+1,v[i]);
        }
    }
    return dp[pos][prev]=ans;
}
void solve(){
    int t;
    cin>>t;
    for(int tt=1;tt<=t;tt++){
        cin>>m>>n;
        v.resize(m);
        for(int i=0;i<m;i++){
            cin>>v[i];
        }
        memset(dp,-1,sizeof(dp));
        int ans=0;
        for(int i=0;i<m;i++){
            ans+=cal(1,v[i]);
        }
        cout<<"Case "<<tt<<": ";
        cout<<ans<<"\n";
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}