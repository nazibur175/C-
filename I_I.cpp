#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
// D L R U
int dx[4]={1,0,0,-1};
int dy[4]={0,-1,1,0};
int n,m,k;
const int N=1e3+9;
char a[N][N];
int vis[N][N];
int lev[N][N];
vector<char>ans;
bool ok(int x,int y){
    return (x<n && x>=0 && y<m && y>=0 && a[x][y]!='*');
}

string s="DLRU";
void solve(){
    cin>>n>>m>>k;
    int sx,sy;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
            if(a[i][j]=='X'){
                sx=i;
                sy=j;
            }
        }
    }

    if(k%2){
        cout<<"IMPOSSIBLE"<<endl;
        return ;
    }
    
    queue<pair<int,int>>q;
    q.push({sx,sy});
    lev[sx][sy]=0;
    // memset(lev,-1,sizeof(lev));
    while (!q.empty())
    {
        int x=q.front().first;
        int y=q.front().second;
        vis[x][y]=1;
        q.pop();
        for(int i=0;i<4;i++){
            int xx=x+dx[i];
            int yy=y+dy[i];
            if(ok(xx,yy) && !vis[xx][yy]){
                q.push({xx,yy});
                lev[xx][yy]=lev[x][y]+1;
                vis[xx][yy]=1;
            }
        }
    }
    vector<char>ans;

    for(int i=1;i<=k;i++){
         int move = k-i;
         bool f=0;
         for(int j=0;j<4;j++){
            int xx=sx + dx[j];
            int yy=sy + dy[j];
            if(ok(xx,yy) && vis[xx][yy] && lev[xx][yy]<=move){
                f=1;
                ans.push_back(s[j]);
                sx=xx;
                sy=yy;
                break;
            }
         }
         if(f==0){
            cout<<"IMPOSSIBLE"<<endl;
            return ;
         }
    }
    for(auto x:ans) cout<<x;
    cout<<endl;
    

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}