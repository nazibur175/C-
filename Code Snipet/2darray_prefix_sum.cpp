#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    int n,m;
    cin>>n>>m;
    int a[n+1][m+1];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++)
            cin>>a[i][j];
    }
    
    int pre[n+1][m+1];
    memset(pre,0,sizeof(pre));
    pre[1][1]=a[1][1];
    for(int i=2;i<=n;i++) pre[1][i]=a[1][i]+pre[1][i-1];
    for(int i=2;i<=n;i++) pre[i][1]=a[i][1]+pre[i-1][1];
    
    for(int i=2;i<=n;i++){
        for(int j=2;j<=n;j++){
            pre[i][j]=pre[i-1][j]+pre[i][j-1]+a[i][j]-pre[i-1][j-1];
        }
    }

    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            cout<<pre[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    // while (m--)
    // {
    //     int x1,y1,x2,y2;
    //     cin>>x1>>y1>>x2>>y2;
    //     cout<<pre[x2][y2] - pre[x1-1][y2] - pre[x2][y1-1] + pre[x1-1][y1-1]<<endl;
    // }
    
}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}