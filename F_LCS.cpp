#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
string s1,s2;
int dp[3001][3001];
int n,m;
int a[3001][3001];
int lcs(int i,int j){
    if(i==n || j==m) return 0;
    auto &ans = dp[i][j];
    if(ans != -1) return ans;
    if(s1[i] == s2[j]){
        a[i][j] = 1;
        return ans = 1 + lcs(i+1,j+1);
    }
    int temp1 = lcs(i+1,j);
    int temp2 = lcs(i,j+1);
    if(temp1 > temp2){
        a[i][j]=2;
        return ans = temp1;
    }
    else {
        a[i][j]=3;
        return ans = temp2;
    }

}
void solve(){
    cin>>s1>>s2;
    n = s1.size();
    m = s2.size();
    memset(dp,-1,sizeof dp);
    //cout<<lcs(0,0)<<"\n";
    int temp=lcs(0,0);
    int i = 0, j = 0;
    while(i<n && j<m){
        if(a[i][j] == 1){
            cout<<s1[i];
            i++;
            j++;
        }
        else if(a[i][j] == 2){
            i++;
        }
        else {
            j++;
        }
    }
    cout<<"\n";
}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}