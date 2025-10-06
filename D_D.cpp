#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int N=1e5+9;
vector<int>edge[N];
int start;
int ed;
int vis[N];
int path[N];

int dfs(int node, int par){
    vis[node]=1;
    for(auto x:edge[node]){
        if (vis[x] == 0) {
        path[x] = node;
        int xx = dfs(x, node);
        if (xx == 1) return 1;
    }
    else if (vis[x] == 1) { 
        ed = node;
        start = x;
        return 1;
    }
    }
    vis[node]=2;
    return -1;
}
void solve(){
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        edge[x].push_back(y);
        //edge[y].push_back(x);
    }
    //cout<<dfs(1,0)<<endl;
    int f=0;
    for(int i=1;i<=n;i++){
        if(vis[i]==0){
            int x=dfs(i,0);
            if(x==1) {
                f=1;
                break;
            }
        }
    }
    // cout<<f<<endl;
    // cout<<start<<" "<<ed<<endl;
    vector<int>res;
    res.push_back(start);
    int val=ed;
    while(val!=start){
        res.push_back(val);
        val=path[val];
    }
    res.push_back(start);
    reverse(res.begin(),res.end());
    if(f){
        cout<<res.size()<<endl;
        for(auto x:res){
            cout<<x<<" ";
        }
    }
    else 
        cout<<"IMPOSSIBLE"<<endl;


}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}