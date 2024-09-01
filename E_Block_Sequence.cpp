#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int dp[n+9]={0};
        dp[n-1]=1;
        for(int i=n-2;i>=0;i--){
            //delete
            int p= 1+dp[i+1];
            //keep
            int q=INT64_MAX;
            if((i+a[i])<n)
                q=dp[i+a[i]+1];
            dp[i]=min(p,q);
        }
        cout<<dp[0]<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}