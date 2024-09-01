#include<bits/stdc++.h>
using namespace std;
vector<int>v[1000000];
bool vis[1000000];
int path[1000001];
int start,finish;

int dfs(int node,int par){
    vis[node]=1; 
    for(auto child: v[node]){
        if(par!=child)
            path[child]=node;
        if(vis[child]==1){
            if(child!=par) {
                finish=node;
                start=child;
                return 1;
                }
        }
        else {
            if(dfs(child,node)) return 1;
        }
             
    }
    return false;
}
int main(){
    int n,e;
    cin>>n>>e;
    while(e--){
        int x,y;
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }

    int ans;
    for(int i=1;i<=n;i++){
        if(vis[i]==0){
            // anss.clear();
             ans=dfs(i,-1);
            if(ans==1) break;
        }
    }
    // cout<<ans<<endl;


    vector<int>res;
    res.push_back(start);
    int val=finish;
    while(val!=start){
        res.push_back(val);
        val=path[val];
    }
    res.push_back(start);
 
    if(ans){
        cout<<res.size()<<endl;
        for(auto x:res){
            cout<<x<<" ";
        }
    }
    else 
        cout<<"IMPOSSIBLE"<<endl;
}
