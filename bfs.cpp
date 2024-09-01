#include<bits/stdc++.h>
using namespace std;  
 
vector<int> bfs(const vector<vector<int>>& adj_list, int start, int target = -1)  
{  
    int n = adj_list.size();  
    vector<bool> visited(n, false);  
    vector<int> ans; 
    queue<int> q;  
    q.push(start); 
    visited[start] = true; 
    while (!q.empty())  
    {  
        int u = q.front();  
        q.pop();  
  
        ans.push_back(u);  
  
        for (int v : adj_list[u])  
        {  
            if (!visited[v])  
            {  
                q.push(v);  
                visited[v] = true;  
            }  
        }  
    }  
    if (target != -1 && !visited[target])  
    {  
        return {};  
    }  
    return ans;  
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
        adj_list[y].push_back(x);
    } 

   
    vector<int> ans = bfs(adj_list, 1);  
    for (int i : ans)  
    {  
        cout << i << " ";  
    }  
    cout << endl;  
    return 0;  
}  