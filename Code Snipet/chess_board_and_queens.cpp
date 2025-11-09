#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
int cnt=0;
const int n=8;
int dig1[2*n+5];
int dig2[2*n+5];
int row[n+1];
char a[n+1][n+1];
// x-row
// y-col
void search(int y){
    if(y==n+1){
        cnt++;
        return;
    }
    for(int x=1;x<=n;x++){
        if(dig1[x+y] || dig2[x-y+n] || row[x] || a[x][y]=='*') continue;
        row[x]=dig1[x+y]=dig2[x-y+n]=1;
        search(y+1);
        row[x]=dig1[x+y]=dig2[x-y+n]=0;
    }
}
void solve(){
   
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>a[i][j];
        }
    }
    search(1);
    cout<<cnt<<endl;


}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}