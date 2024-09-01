#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   operation()    ios_base:: sync_with_stdio(0);cin.tie(0);cout.tie(0)
int dx[8]={0,0,1,-1,-1,-1,1,1};
int dy[8]={1,-1,0,0,-1,1,-1,1};
int n,m;
char a[1000+9][1000+9];
int vis[1000+9][1000+9];

bool ok(int x,int y){
    return (x<n && x>=0 && y<m && y>=0 && a[x][y]!='*');
}

queue<pair<int,int>>q;
void bfs(int x,int y)
{
	q.push({x,y});
	vis[x][y]=1;
	while(!q.empty())
	{
		auto a=q.front();
		q.pop();
        for(int i=0;i<8;i++){
        int _x=a.first+dx[i];
        int _y=a.second+dy[i];
        if(!vis[_x][_y] && ok(_x,_y))
        {
            vis[_x][_y]=1;
            q.push({_x,_y});
        }
    }

	}
}
void solve(){
    
    while (cin>>n>>m)
    {
        q.empty();
        // for(int i=0;i<1000;i++){
        //     for(int j=0;j<1000;j++){
        //         vis[i][j]=0;
        //     }
        // }
        if(n==0) break;
        for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
            vis[i][j]=0;
        }
    }

    int ans=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(vis[i][j]==0 && a[i][j]=='@'){
                ans++;
                bfs(i,j);
            }
        }
    }
    cout<<ans<<endl;
    }
    
    
}
int32_t main()
{
operation();
solve();

}
