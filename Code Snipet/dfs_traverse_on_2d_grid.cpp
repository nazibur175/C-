#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define   operation()    ios_base:: sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define test int t; cin>>t; while(t--)

int dx[8]={0,0,1,-1,-1,-1,1,1};
int dy[8]={1,-1,0,0,-1,1,-1,1};
int n,m;
char a[1000+9][1000+9];
int vis[1000+9][1000+9];
int c=0;
bool ok(int x,int y){
    return (x<n && x>=0 && y<m && y>=0 && a[x][y]!='#');
}
void dfs(int x, int y){
    vis[x][y]=1;
    for(int i=0;i<4;i++){
        int _x=x+dx[i];
        int _y=y+dy[i];
        if(!vis[_x][_y] && ok(_x,_y))
        {
            // c++;
            dfs(_x,_y);
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

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]=='.' && !vis[i][j]){
                dfs(i,j);
                c++;

            }
            // cout<<a[i][j];
        }
    }
    cout<<c<<endl;

    

}
int32_t main()
{
operation();
solve();

}
