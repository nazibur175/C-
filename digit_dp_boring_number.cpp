#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
int dp[20][2][2][2];
int cal(string& R,int n,bool even,  bool leading_zero,bool tight){
    if(n==0) return 1;
    if(dp[n][even][leading_zero][tight]!=-1) 
        return dp[n][even][leading_zero][tight];
    int ub=tight?(R[R.size()-n]-'0'):9;
    int high=ub;
    int res=0;
    if(even){
        for(int i=0;i<=high;i+=2){
            res+= cal(R,n-1,0,0,(tight&(i==ub)));
        }
    }
    else{
        if(leading_zero==1){
            res+=cal(R,n-1,0,1,0);
        }
        for(int i=1;i<=high;i+=2){
            char ch= i+ '0';
           res+= cal(R,n-1,1,0,tight&(i==ub));
        }
    }
    return dp[n][even][leading_zero][tight]= res;
    // return res;
}
void solve(){
    test{
    int l,r;
    cin>>l>>r;
    l--;
    string L=to_string(l);
    string R=to_string(r);
    
    memset(dp,-1,sizeof(dp));
    int ans1 = cal(L,L.size(),0,1,1);
    memset(dp,-1,sizeof(dp));
    int ans2 = cal(R,R.size(),0,1,1);
    cout<<ans2-ans1<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}