#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
// int r,rr,c,cc;
// int x,y;
char ch[13][13];
int dp[13][13][13][13][13][13];
int dx[4]={1,-1,0,0};
int dy[4]={0,0,1,-1};
int ok(int r,int rr,int c,int cc,int x,int y){
    if(x<r || x>rr || y<c || y>cc ) return 1;
    if(ch[x][y]=='#') return 0;
    else return 1;
}
int h,w;
int cal(int R,int C, int r,int rr,int c,int cc,int x,int y,int xx,int yy){
    // if(x==r || x==rr || y==c || y==cc){
    //     return 0;
    // }
    int temp=1;
    for(int i=r;i<=rr;i++){
        for(int j=c;j<=cc;j++){
            if(ch[i][j]=='#'){
                temp=0;
                break;
            }
        }
        if(temp==0) break;
    }
    if(temp==1) return 0;

    int f=0;
    
    if(dp[r][rr][c][cc][x][y]!=-1) 
        return dp[r][rr][c][cc][x][y];
    int ans = mod;
    for(int i=0;i<4;i++){
        int _x=x+dx[i];
        int _y=y+dy[i];
        if(ok(r,rr,c,cc,_x,_y)){
            f=1;
            if(i==0){
                if(R+1>r){
                    xx=0;
                    // yy=0;
                    ans=min(ans, 1 + cal(R+1,C,r+1,rr,c,cc,_x,_y,xx,yy));
                }
                else if(xx==0 || xx==1){
                    xx=1;
                    // yy=0;
                    ans=min(ans, 1 + cal(R+1,C,r,rr,c,cc,_x,_y,xx,yy));
                }
            }
            else if(i==1){
                if((R+h-2)<rr){
                    xx=0;
                    // yy=0;
                    ans=min(ans, 1 + cal(R-1,C,r,rr-1,c,cc,_x,_y,xx,yy));
                }
                else if(xx==0 || xx==2){
                    xx=2;
                    // yy=0;
                    ans=min(ans, 1 + cal(R-1,C,r,rr,c,cc,_x,_y,xx,yy));
                }
            }
            else if(i==2){
                if(C+1>c){
                    yy=0;
                    // xx=0;
                    ans=min(ans, 1 + cal(R,C+1,r,rr,c+1,cc,_x,_y,xx,yy));
                }
                else if(yy==0 || yy==1){
                    yy=1;
                    // xx=0;
                    ans=min(ans, 1 + cal(R,C+1,r,rr,c,cc,_x,_y,xx,yy));
                }
            }
            else if(i==3){
                if((C+w-2)<cc){
                    yy=0;
                    // xx=0;
                    ans=min(ans, 1 + cal(R,C-1,r,rr,c,cc-1,_x,_y,xx,yy));
                }
                else if(yy==0 || yy==2){
                    yy=2;
                    // xx=0;
                    ans=min(ans, 1 + cal(R,C-1,r,rr,c,cc,_x,_y,xx,yy));
                } 
            }
        }
    }
    if(f==0) return mod;
    return dp[r][rr][c][cc][x][y]=ans;
}
void solve(){
    
    cin>>h>>w;
    int x,y;
    memset(dp,-1,sizeof(dp));
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            cin>>ch[i][j];
            if(ch[i][j]=='T'){
                x=i;
                y=j;
            }
        }
    }
    // cout<<x<<" "<<y<<endl;
    int ans= cal(0,0,0,h-1,0,w-1,x,y,0,0);
    if(ans>=mod) cout<<-1<<endl;
    else cout<<ans<<endl;
    // cout<<ans<<endl;
    
}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}