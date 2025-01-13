#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,m;
        cin>>n>>m;
        string s;
        cin>>s;
        int len = s.size();
        int a[n+1][m+1];
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                cin>>a[i][j];
            }
        }
        
        int row=1,col=1;
        for(int i=0;i<len;i++){
            if(s[i]=='R'){
                int sum=0;
                for(int j=1;j<=n;j++){
                    sum+=a[j][col];
                }
                a[row][col]=sum*(-1);
                col++;
            }
            else {
                int sum=0;
                for(int j=1;j<=m;j++){
                    sum+=a[row][j];
                }
                a[row][col]=sum*(-1);
                row++;
            }
        }
        int sum=0;
        for(int i=1;i<=m;i++){
            sum+=a[n][i];
        }

        int summ=0;
        for(int i=1;i<=n;i++){
            summ+=a[i][m];
        }
        //cout<<sum<<" "<<summ<<endl;

        a[n][m]=sum*(-1);
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
        //cout<<"-------------------"<<endl;

        // int rows[n+1]={0};
        // int cols[m+1]={0};
        // for(int i=1;i<=n;i++){
        //     int sum=0;
        //     for(int j=1;j<=m;j++){
        //         sum+=a[i][j];
        //     }
        //     rows[i]=sum;
        //     cout<<rows[i]<<" ";
        // }
        // cout<<endl;
        // for(int i=1;i<=m;i++){
        //     int sum=0;
        //     for(int j=1;j<=n;j++){
        //         sum+=a[j][i];
        //     }
        //     cols[i]=sum;
        //     cout<<cols[i]<<" ";
        // }
        // cout<<endl;
        // cout<<"-------------------"<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}