#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,m;
        cin>>n>>m;
        int a[n][m];
        map<int,int>row,col;
        int mx=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>a[i][j];
                mx=max(mx,a[i][j]);
            }
        }
        int total=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(a[i][j]==mx){
                    total++;
                    row[i]++;
                    col[j]++;
                }
            }
        }
        int f=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int temp=row[i]+col[j];
                if(a[i][j]==mx){
                    temp--;
                }
                if(temp==total){
                    f=1;
                    break;
                }
            }
            if(f) break;
        }
        if(f) cout<<mx-1<<endl;
        else cout<<mx<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}