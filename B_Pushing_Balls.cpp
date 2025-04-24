#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,m;
        cin>>n>>m;
        int a[n+2][m+2];
        for(int i=1;i<=n;i++){
            string s;
            cin>>s;
            for(int j=1;j<=m;j++){
                if(s[j-1]=='1'){
                    a[i][j]=1;
                }
                else{
                    a[i][j]=0;
                }
            }
        }
        // row col
        // col row
        int row[n+2][m+2];
        memset(row,0,sizeof(row));
        int col[n+2][m+2];
        memset(col,0,sizeof(col));
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                row[i][j]= row[i][j-1]+a[i][j];
                col[i][j]= col[i-1][j]+a[i][j];
            }
        }
        
        int f=1;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                int r=i;
                int c=j;
                if(a[i][j]==1 && (row[i][j]!=c && col[i][j]!=r)){
                    f=0;
                    break;
                }
            }
        }
        
        if(f){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}