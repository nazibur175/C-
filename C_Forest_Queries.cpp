#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    int n,q;
    cin>>n>>q;
    int a[n+2][n+2]={0};
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            char ch;
            cin>>ch;
            if(ch=='*')
                a[i][j]=1;
        }
    }
    
    
    int pre[n+2][n+2]={0};
    memset(pre,0,sizeof(pre));
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            pre[i][j]=pre[i][j-1]+a[i][j];
        }
    }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            pre[i][j]+=pre[i-1][j];
        }
    }

    while (q--)
    {
        int x,y,xx,yy;
        cin>>x>>y>>xx>>yy;
        cout<<pre[xx][yy]-pre[x-1][yy]-pre[xx][y-1]+pre[x-1][y-1]<<endl;
    }
    
}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}