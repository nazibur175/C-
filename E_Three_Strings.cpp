#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
string s,ss,sss;
int dp[1001][1001];
void change(){
    dp[0][0] =0;
    for (int i =0; i<=s.size(); i++) {
        for (int j =0; j<=ss.size(); j++) {
            if ((i+j)>=sss.size()) 
                continue;
            if (i<s.size()){
                int cost=0;
                if(s[i]!=sss[i+j]){
                    cost=1;
                }
                dp[i+1][j]=min(dp[i+1][j],dp[i][j]+cost);
            }
            if (j<ss.size()) {
                int cost=0;
                if(ss[j]!=sss[i+j]){
                    cost=1;
                }
                dp[i][j+1] = min(dp[i][j+1], dp[i][j]+cost);
            }
        }
    }

    return ;
}
void solve(){
    test{
        cin>>s>>ss>>sss;
        for(int i=0;i<=s.size();i++){
            for(int j=0;j<=ss.size();j++){
                dp[i][j]=INT_MAX;
            }
        }
        change();
        cout<<dp[s.size()][ss.size()]<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}