#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int N=2e5+9;
int vis[2][N];
int n;
char a[2][N];

int startvisit(int x, int y){
        queue<pair<int,int>>q;
        int c2=1;
        vis[x][y]=1;
        q.push({x,y});
        while (!q.empty())
        {
            auto ab=q.front();
            
            int i=ab.first;
            int j=ab.second;
            
            //auto [i,j]=q.front();
            q.pop();
            if(i+1<2 && a[i+1][j]=='B' && !vis[i+1][j]){
                q.push({i+1,j});
                c2++;
                vis[i+1][j]=1;
            }
            else if(i-1>=0 && a[i-1][j]=='B' && !vis[i-1][j]){
                q.push({i-1,j});
                c2++;
                vis[i-1][j]=1;
            }
            else if(j+1<n && a[i][j+1]=='B' && !vis[i][j+1]){
                q.push({i,j+1});
                c2++;
                vis[i][j+1]=1;
            }
            else continue;

        }
    return c2;

}
void solve(){
    test{
        cin>>n;
        int c=0;
        for(int i=0;i<2;i++){
            for(int j=0;j<n;j++){
                cin>>a[i][j];
                if(a[i][j]=='B') c++;
            }
        }

        
        int c1st=0;
        int c2nd=0;

        for(int i=0;i<2;i++){
            for(int j=0;j<n;j++){
               vis[i][j]=0;
            }
        }

        if(a[0][0]=='B') {
            c1st=startvisit(0,0);
        }
        
        for(int i=0;i<2;i++){
            for(int j=0;j<n;j++){
               vis[i][j]=0;
            }
        }

        if(a[1][0]=='B'){
         c2nd=startvisit(1,0);
        }
            
        
        if(c==c1st || c==c2nd) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        //cout<<c<<" "<<c1st<<" "<<c2nd<<endl;
        
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}