#include<bits/stdc++.h>
using namespace std;  
const int inf=1e18;
int bfs(const vector<vector<int>>& v, int start)  
{  
    int n = v.size();  
    vector<bool> vis(n, false); 
    vector<int>dis(n,false); 
    //vector<int> ans; 
    queue<int> q;  
    q.push(start); 
    vis[start] = true; 
    int cnt=inf;
     while(!q.empty())
    {
        int f=q.front();
        q.pop();
        for(int child: v[f]){
            if(child==1){
               int temp=dis[f]+1;
                cnt = min(cnt,temp);
            }
            if(vis[child]==0){
                q.push(child);
                vis[child]=1;
                dis[child]=dis[f]+1;
            }
        }
    }
     
    return cnt;  
}  
int main()  
{  
     
    int n,m;
    cin>>n>>m;
    vector<vector<int>>adj_list(n+5);
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        adj_list[x].push_back(y);
        //adj_list[y].push_back(x);
    } 

   
    int ans = bfs(adj_list, 1);  
    if(ans==inf) cout<<-1<<endl;
    else 
        cout<<ans<<endl;
    return 0;  
}  