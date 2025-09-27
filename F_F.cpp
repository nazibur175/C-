#include<bits/stdc++.h>
using namespace std;
//#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
int dp1[5001][5001];
int dp2[5001][5001];
string s;
int f1(int i,int j){
    if(i>j)return 1;
    if(dp1[i][j]!=-1)return dp1[i][j];
    if(s[i]==s[j]){
        return dp1[i][j]=f1(i+1,j-1);
    }
    else return dp1[i][j]=0;
}
int f2(int i,int j){
    if(i>j) return 0;
    if(dp2[i][j]!=-1) return dp2[i][j];
    int ans=0;
    if(f1(i,j)) ans++;
    ans+=f2(i+1,j);
    ans+=f2(i,j-1);
    ans-=f2(i+1,j-1);
    return dp2[i][j]=ans;
}
void solve(){
    memset(dp1,-1,sizeof(dp1));
    memset(dp2,-1,sizeof(dp2));
    cin>>s;
    int n;
    cin>>n;
    while(n--){
        int l,r;
        cin>>l>>r;
        l--;r--;
        cout<<f2(l,r)<<"\n";
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}