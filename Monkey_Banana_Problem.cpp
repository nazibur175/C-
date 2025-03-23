#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    int t;
    cin>>t;
    for(int tt=1;tt<=t;tt++){
        int n;
        cin>>n;
        int a[n][n];
        vector<int>v[n];
        for(int i=0;i<n;i++){
            for(int j=0;j<=i;j++){
                cin>>a[i][j];
                v[j].push_back(a[i][j]);
            }
        }
        for(int i=1;i<n;i++){
            for(int j=i;j<n;j++){
                cin>>a[j][i];
                v[j].push_back(a[j][i]);
            }
        }
        int dp[n][n];
        memset(dp,0,sizeof(dp));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                dp[i][j]=v[i][j]+max((i-1)>=0 ? dp[i-1][j] : 0LL ,(j-1)>=0 ? dp[i][j-1] : 0LL);
            }
        }
        cout<<"Case "<<tt<<": ";
        cout<<dp[n-1][n-1]<<endl;
        // It's assign value is reversed so think about it
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}