#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
int dp[200005][2];
int cal(vector<int>&v,int pos,int turn){
    if(pos==v.size()){
        return 0;
    }
    if(dp[pos][turn]!=-1){
        return dp[pos][turn];
    }
    int ans=INT64_MAX;
    if(turn==0){
        int temp=0;
        for(int i=pos;i<=min((int)v.size()-1,pos+2);i++){
            temp+=v[i];
            ans=min(ans,temp+cal(v,i+1,1));
        }
    }else{
        ans=min(cal(v,pos+1,0),cal(v,pos+2,0));
    }
    return dp[pos][turn]=ans;
}
void solve(){
    test{
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<=n;i++){
            dp[i][0]=dp[i][1]=-1;
        }
        cout<<cal(a,0,0)<<"\n";
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}