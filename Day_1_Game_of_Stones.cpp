#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int N=200;
int dp[N];
int mex(int a,int b,int c){
    map<int,int>m;
    m[a]++;
    m[b]++;
    m[c]++;
    int i=0;
    while (1)
    {
        if(m[i]==0){
            return i;
            break;
        }
        i++;
    }
    
}
int cal_grandy(int n){
    if(dp[n]!=-1) return dp[n];
    if(n==0) return 0;
    else if(n==1) return 0;
    else if(n==2) return 1;
    else if(n==3) return 3;
    else if(n==4) return 2;
    else if(n==5) return 3;
    else return dp[n]= mex(cal_grandy(n-2),cal_grandy(n-3),cal_grandy(n-5));
}
void solve(){
    memset(dp,-1,sizeof(dp));
      // cal_grandy(6);
    test{
        int n;
        cin>>n;
        if(cal_grandy(n)) cout<<"First"<<endl;
        else cout<<"Second"<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}