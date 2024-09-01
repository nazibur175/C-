#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   operation()    ios_base:: sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define test int t; cin>>t; while(t--)
int dx[8]={0,0,1,-1,-1,-1,1,1};
int dy[8]={1,-1,0,0,-1,1,-1,1};
int N=2005;
char a[2000+9][2000+9];
int vis[2000+9][2000+9];
int c=0;
bool ok(int x,int y){
    return (x<N && x>=0 && y<N && y>=0 && a[x][y]!='1');
}
int valtrac[2000+9][2000+9];
queue<pair<int,int>>q;
void bfs(int x,int y)
{
    if(x!=-1 && y!=-1){
        q.push({x,y});
	    vis[x][y]=1;
    }
	
	while(!q.empty())
	{
		auto aa=q.front();
		q.pop();
        //cout<<"ok"<<endl;
        for(int i=0;i<4;i++){
        int _x=aa.first+dx[i];
        int _y=aa.second+dy[i];
        if(!vis[_x][_y] && ok(_x,_y))
        {
            vis[_x][_y]=1;
            q.push({_x,_y});
            valtrac[_x][_y]=valtrac[aa.first][aa.second]+1;
            //cout<<"ok"<<endl;
        }
        if(a[_x][_y]=='2'){
                c=valtrac[_x][_y];
                //cout<<"ok"<<endl;
                break;
            }
    }
    if(c) break;

	}
}
void solve(){
    
    int n;
    while (cin>>n,n)
    {
        //make all them zero
        for(int i=0;i<2005;i++){
            for(int j=0;j<2005;j++){
                vis[i][j]=0;
                valtrac[i][j]=0;
                a[i][j]='*';
            }
        }
        while (!q.empty())
        {
            q.pop();
        }
        
        c=0;

        for(int i=0;i<n;i++){
            int x,y;
            cin>>x>>y;
            q.push({x,y});
            a[x][y]='1';
            vis[x][y]=1;
        }
        int m;
        cin>>m;
        for(int i=0;i<m;i++){
            int x,y;
            cin>>x>>y;
            a[x][y]='2';
        }
    bfs(-1,-1);
    cout<<c<<endl;
    }
    
    
    
}
int32_t main()
{
operation();
solve();

}
