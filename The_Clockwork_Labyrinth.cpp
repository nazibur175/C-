#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
int dx[4]={0,0,1,-1};
int dy[4]={1,-1,0,0};
int n,m;
char a[1000+9][1000+9];
int vis[1000+9][1000+9];
int level[1000+9][1000+9];

bool ok(int x,int y){
    return (x<n && x>=0 && y<m && y>=0 && a[x][y]!='-');
}

queue<pair<int,int>>q;
void bfs(int x,int y)
{
    if(a[x][y]=='-') return;
	q.push({x,y});
	vis[x][y]=1;
    level[x][y]=0;
	while(!q.empty())
	{
		auto a=q.front();
		q.pop();
        
        for(int i=0;i<4;i++){
        int _x=a.first+dx[i];
        int _y=a.second+dy[i];
        if(!vis[_x][_y] && ok(_x,_y))
        {
            level[_x][_y]=level[a.first][a.second]+1;
            vis[_x][_y]=1;
            q.push({_x,_y});
        }
    }

	}
}
void solve(){
    test{
        cin>>n>>m;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>a[i][j];
            }
        }
        for(int i=0;i<=n;i++){
            for(int j=0;j<=m;j++){
                vis[i][j]=0;
                level[i][j]=0;
            }
        }
        int A,B;
        cin>>A>>B;
        A--;
        B--;
        bfs(A,B);
        int x,y;
        cin>>x>>y;
        x--;
        y--;
        if(!vis[x][y])cout<<"-1"<<endl;
        else cout<<level[x][y]<<endl;
    }
}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}