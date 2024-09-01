#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int N=1e5;
int dp[N];
int fibo(int n){
    if(n==0) return 0;
    else if(n==1)return 1;
    if(dp[n]) return dp[n];
    else return dp[n]=fibo(n-1)+fibo(n-2);
}
void solve(){
    int n;
    cin>>n;
    cout<<fibo(n)<<endl;

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}