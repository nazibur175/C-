#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   inf             1000000007
#define test int t; cin>>t; while(t--)
int a[20][3];
int dp[20][4];
int n;
int cal(int cur_row,int pre){
    if(cur_row >=n) return 0;
    int x=inf;
    int y=inf;
    int z=inf;
    if(dp[cur_row][pre]!=-1) return dp[cur_row][pre];
    if(pre!=0 ){
        x=cal(cur_row+1,0)+ a[cur_row][0];
    }
    if(pre!=1 ){
        y=cal(cur_row+1,1) + a[cur_row][1];
    }
    if(pre!=2 ){
        z=cal(cur_row+1,2) + a[cur_row][2];
    }
    
    return dp[cur_row][pre]= min(x,min(y,z));
}
void solve(){
    int t;
    cin>>t;
    
    for(int tc=1;tc<=t;tc++){
        cin>>n;
        for(int i=0;i<n;i++){
            for(int j=0;j<3;j++) 
                {
                    cin>>a[i][j];
                   
                }
        }
        for(int i=0;i<20;i++){
            for(int j=0;j<4;j++){
                dp[i][j]=-1;
            }
                
        }
        
        int ans=cal(0,4);
        cout<<"Case "<<tc<<": "; 
        cout<<ans<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}