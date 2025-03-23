#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    int t;
    cin>>t;
    for(int tt=1;tt<=t;tt++){
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int cnt[n];
        for(int i=0;i<n;i++){
            cin>>cnt[i];
        }
        int dp[k+1]={0};
        int used[k+1]={0};
        int ans=0;
        dp[0]=1;
        for(int i=0;i<n;i++){
            memset(used,0,sizeof(used));
            for(int j=a[i];j<=k;j++){
                if(!dp[j] && dp[j-a[i]] && used[j-a[i]]<cnt[i]){
                    ans++;
                    dp[j]=1;
                    used[j]=used[j-a[i]]+1;
                }
            }
        }
        cout<<"Case "<<tt<<": ";
        cout<<ans<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}