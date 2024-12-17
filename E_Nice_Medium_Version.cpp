#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define test int t; cin>>t; while(t--)
int dp[20][2][2];
vector<int>v{6,9};
int N;
int cal(string& R,int pos, bool leading_zero,bool tight){
    if(pos==N) return 1;
    if(dp[pos][leading_zero][tight]!=-1) 
        return dp[pos][leading_zero][tight];

    int ub= R[pos]-'0';
    if(tight==0) ub=9;
    int res=0;
    if(leading_zero==1){
            res+=cal(R,pos+1,1,0);
    }
    for(auto i:v){
           if(i>ub) break;
           if(tight==0){
             res+= cal(R,pos+1,0,0);
           }
           else if(i<ub){
             res+= cal(R,pos+1,0,0);
           }
           else
           res+= cal(R,pos+1,0,1);
    }
    
    return dp[pos][leading_zero][tight]= res;
}
void solve(){
    test{
    int l,r;
    cin>>l>>r;
    l--;
    string L=to_string(l);
    string R=to_string(r);

    memset(dp,-1,sizeof(dp));
    N=L.size();
    int ans1 = cal(L,0,1,1);
    memset(dp,-1,sizeof(dp));
    N=R.size();
    int ans2 = cal(R,0,1,1);
    //cout<<ans1<<" "<<ans2<<endl;
    cout<<ans2-ans1<<endl;
    }
}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}