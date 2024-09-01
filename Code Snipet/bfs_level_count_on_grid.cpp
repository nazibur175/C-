#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define   operation()    ios_base:: sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define test int t; cin>>t; while(t--)

// int dx[8]={0,0,1,-1,-1,-1,1,1};
// int dy[8]={1,-1,0,0,-1,1,-1,1};

int dx[8]={0,1};
int dy[8]={1,0};
//RLDU
int n,m;
char a[1000+9][1000+9];
int vis[1000+9][1000+9];
int level[1000+9][1000+9];
int c=0;

bool ok(int x,int y){
    return (x<n && x>=0 && y<m && y>=0 && a[x][y]!='#');
}

queue<pair<int,int>>q;
void bfs(int x,int y)
{
	q.push({x,y});
	vis[x][y]=1;
    level[x][y]=1;
	while(!q.empty())
	{
		auto a=q.front();
		q.pop();
        
        for(int i=0;i<2;i++){
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
    
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }

    bfs(0,0);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            c=max(c,level[i][j]);
        }
    }
    cout<<c<<endl;
}
int32_t main()
{
operation();
solve();

}
