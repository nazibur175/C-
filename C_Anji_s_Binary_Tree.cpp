#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        string s;
        cin>>s;
        vector<int>edges[n+9];
        int cost[n+9]={0};
        for(int i=1;i<=n;i++){
            int x,y;
            cin>>x>>y;
            if(x) {
                edges[i].push_back(x);
                if(s[i-1]=='R' || s[i-1]=='U')
                    cost[x]=1;
            }
            if(y){
                edges[i].push_back(y);
                if(s[i-1]=='L' || s[i-1]=='U')
                    cost[y]=1;
            }
        }
        queue<int>q;
        q.push(1);
        int ans=n;
        while (!q.empty())
        {
            int x=q.front();
            q.pop();
            if(edges[x].empty()){
                ans=min(ans,cost[x]);
            }
            {
                for(auto p:edges[x]){
                    cost[p]+=cost[x];
                    q.push(p);
                }
            }
        }
        cout<<ans<<endl;
        
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}