#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int N=2e5+9;
int vis[N];
int level[N];
int hs[N];
vector<int>edge[N];
vector<int>level_hash[N];
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
    int my_rand(int l, int r)
    {
    	return uniform_int_distribution<int>(l, r) (rng);
    }

int dfs(int node, int par){
    vis[node]=1;
    int hash_val=hs[level[node]];
    for(auto x:edge[node]){
        if(x!=par){
            level[x]=level[node]+1;
            int temp = dfs(x,node);
            hash_val=hash_val*((hs[level[x]]+temp)%mod);
            hash_val%=mod;
        }
    }
    level_hash[level[node]].push_back(hash_val);
    return hash_val%mod;
}
void solve(){
    for(int i=1;i<N;i++){
        hs[i]=my_rand(1,mod);
    }
    test{
        int n;
        cin>>n;
        for(int i=0;i<=n;i++){
            vis[i]=0;
            level[i]=0;
            //hs[i]=0;
            edge[i].clear();
            level_hash[i].clear();
        }
        for(int i=0;i<n-1;i++){
            int x,y;
            cin>>x>>y;
            edge[x].push_back(y);
            edge[y].push_back(x);
        }
        int temp = dfs(1,0);
        int ans=1;
        for(int i=1;i<=n;i++){
            map<int,int>mp;
            for(auto x:level_hash[i]){
                mp[x]++;
                //cout<<x<<endl;
            }
            int cnt=0;
            for(auto x:mp){
                cnt+= x.second%2;
            }
            if(cnt>1){
                ans=0;
                break;
            }
        }
        if(ans) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}