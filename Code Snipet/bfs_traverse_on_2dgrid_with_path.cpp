#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define   operation()    ios_base:: sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define test int t; cin>>t; while(t--)
int si,sj;
int ei,ej;
int dx[8]={0,0,1,-1,-1,-1,1,1};
int dy[8]={1,-1,0,0,-1,1,-1,1};
//RLDU
int n,m;
char a[1000+9][1000+9];
int vis[1000+9][1000+9];
int c=0;
vector<int>ans;
bool ok(int x,int y){
    return (x<n && x>=0 && y<m && y>=0 && a[x][y]!='#');
}
int ter=0;
int valtrac[1000+9][1000+9];

pair<int,int>path[1000+9][1000+9];
queue<pair<int,int>>q;
void bfs(int x,int y)
{
	q.push({x,y});
	vis[x][y]=1;
    if(x==ei && y==ej) ter=1; 
	while(!q.empty())
	{
		auto a=q.front();
		q.pop();
        for(int i=0;i<4;i++){
        int _x=a.first+dx[i];
        int _y=a.second+dy[i];
        if(!vis[_x][_y] && ok(_x,_y) && !ter)
        {
            vis[_x][_y]=1;
            q.push({_x,_y});
            path[_x][_y]=make_pair(a.first,a.second);
            valtrac[_x][_y]=i;
        }
    }

	}
}
void solve(){
    
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
            if(a[i][j]=='A') {
                si=i;
                sj=j;
            }
            if(a[i][j]=='B') {
                ei=i;
                ej=j;
            }
        }
    }

    // dfs(si,sj);
    bfs(si,sj);
    if(vis[ei][ej]){
    
    int m=ei;
    int n=ej;
    // cout<<m<<" "<<n<<endl;
    ans.push_back(valtrac[m][n]);
    while(path[m][n].first || path[m][n].second){
        int p,q;
        p=path[m][n].first;
        q=path[m][n].second;
        ans.push_back(valtrac[p][q]);
        m=p;
        n=q;
    }
    if(si || sj)
    ans.pop_back();
    reverse(ans.begin(), ans.end());

    cout<<"YES"<<endl;
    cout<<ans.size()<<endl;
        for(auto x: ans){
        if(x==0) cout<<"R";
        else if(x==1) cout<<"L";
        else if(x==2) cout<<"D";
        else cout<<"U";
    }
    cout<<endl;

    }
    else cout<<"NO"<<endl;
    
}
int32_t main()
{
operation();
solve();

}
