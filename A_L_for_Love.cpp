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
bool ok(int x,int y){
    return (x<n && x>=0 && y<m && y>=0 && a[x][y]=='*');
}
int c=0;
void dfs(int x, int y){
    c++;
    vis[x][y]=1;
    for(int i=0;i<8;i++){
        int _x=x+dx[i];
        int _y=y+dy[i];
        if(!vis[_x][_y] && ok(_x,_y))
        {
            // c++;
            dfs(_x,_y);
        }
    }
}
int cc=0;
void dfs2(int x, int y){
    cc++;
    vis[x][y]=1;
    for(int i=0;i<4;i++){
        int _x=x+dx[i];
        int _y=y+dy[i];
        if(!vis[_x][_y] && ok(_x,_y))
        {
            // c++;
            dfs2(_x,_y);
        }
    }
}
void solve(){
    
    
    test{
    cin>>n>>m;
    for(int i=0;i<1000;i++){
        for(int j=0;j<1000;j++){
            vis[i][j]=0;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    int f=1;
    for(int i=0;i<n;i++){
        for(int j=0;j+2<m;j++){
            if(a[i][j]==a[i][j+1] && a[i][j+1]==a[i][j+2] && a[i][j]=='*')
            {
                f=0;
                break;
            }
        }
    }
    for(int i=0;i+2<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]==a[i+1][j] && a[i+1][j]==a[i+2][j] && a[i][j]=='*')
            {
                f=0;
                break;
            }
        }
    }


    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            c=0;
            if(a[i][j]=='*' && !vis[i][j]){
                dfs(i,j);
                if(c!=3){
                    f=0;
                    break;
                }
                

            }
            // cout<<a[i][j];
        }
    }


    for(int i=0;i<1000;i++){
        for(int j=0;j<1000;j++){
            vis[i][j]=0;
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cc=0;
            if(a[i][j]=='*' && !vis[i][j]){
                dfs2(i,j);
                if(cc!=3){
                    f=0;
                    break;
                }
                

            }
            // cout<<a[i][j];
        }
    }


    if(f) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    //cout<<c<<endl;
    }

    

}
int32_t main()
{
operation();
solve();

}
