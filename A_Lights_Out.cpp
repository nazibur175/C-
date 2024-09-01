#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    int n=3;
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    int b[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            b[i][j]=1;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            //i j
            b[i][j]+=a[i][j];
            //i+1 j
            if(i+1<3) b[i+1][j]+=a[i][j];
            //i-1 j
            if(i-1>=0) b[i-1][j]+=a[i][j];
            //i j+1
            if(j+1<3) b[i][j+1]+=a[i][j];
            //i j-1
            if(j-1>=0) b[i][j-1]+=a[i][j];

        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<b[i][j]%2;
        }
        cout<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}