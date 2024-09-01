#include<bits/stdc++.h>
using  namespace  std;
int vis[1000001],dis[1000001];
vector<int>v[1000001];
vector<int>a[1000001];
int path[1000001];
void bfs(int node)
{
	queue<int>q;
	q.push(node);
	vis[node]=1;
	dis[node]=0;
	while(!q.empty())
	{
		int a=q.front();
		q.pop();
		for(int child: v[a])
		{
			if(vis[child]==0)
			{
				// dis[child]=dis[a]+1;
                path[child]=a;
				vis[child]=1;
				q.push(child);
			}
		}
	}
}
int main()
{
	int n,m,x,y;
	cin>>n>>m;
	while(m--)
	{
		cin>>x>>y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	bfs(1);
    vector<int>ans;
    int val=n;
    ans.push_back(val);
    while(path[val]){
        ans.push_back(path[val]);
        val=path[val];
    }
    reverse(ans.begin(), ans.end());
    if(!vis[n]) cout<<"IMPOSSIBLE"<<endl;
    else{
        cout<<ans.size()<<endl;
        for(auto it:ans) cout<<it<<" ";
        cout<<endl;
    }
	return 0;
}