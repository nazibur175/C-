#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             998244353
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        vector<int>ed[n+1];
        for(int i=2;i<=n;i++){
            int x;
            cin>>x;
            ed[x].push_back(i);
        }

        queue<int>q;
        vector<int>vis(n+1,0);
        q.push(1);
       int lev[n+1]={0};
        while (!q.empty())
        {
            int node = q.front();
            vis[node]=1;
            q.pop();
            for(auto x:ed[node]){
                if(!vis[x]){
                    lev[x]=lev[node]+1;
                    q.push(x);
                }
            }
        }
        vector<int>level[n+1];
        for(int i=1;i<=n;i++){
            //m[lev[i]]++;
            level[lev[i]].push_back(i);
        }
        int dp[n+1]={0};
        for(int i=n-1;i>0;i--){
            if(i==n-1){
                for(auto x:level[i]){
                    dp[x]=1;
                }
            }
            else{
                int sum=0;
                for(auto x:level[i+1]){
                    sum+=dp[x];
                    sum%=mod;
                }
                for(auto x:level[i]){
                    int temp=sum;
                    for(auto xx:ed[x]){
                        temp-=dp[xx];
                        temp = (temp+mod)%mod;
                    }
                    dp[x]=(temp+1)%mod;

                }
            }
        }
        int ans=0;
        for(auto x:ed[1]){
            ans+=dp[x];
            ans%=mod;
        }
        ans++;
        cout<<ans%mod<<endl;
        
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}