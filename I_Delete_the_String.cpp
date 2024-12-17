#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int inf=1e18;
map<char,int>dp;
map<char,vector<int>>mp;
string s;
int cal(int pos){
    if(pos==0){
        return 0;
    }
    char val=s[pos];
    if(dp[val]!=-1){
        return dp[val];
    }
    int ans=cal(pos-1)+1;
    for(auto i:mp[s[pos]]){
        if(i<=pos){  
            ans=min(ans,cal(i-1)+1);
        }
        else break;
    }
    return dp[val]=ans;
}
void solve(){
    test{
        //memset(dp,-1,sizeof dp);
        mp.clear();
        int n;
        cin>>n;
        for(char i='a';i<='z';i++){
            dp[i]=-1;
        }
        s.clear();
        cin>>s;
        s="#"+s;
        for(int i=1;i<=n;i++){
            mp[s[i]].push_back(i);
        }
        cout<<cal(n)<<endl;
        //cout<<cnt<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}