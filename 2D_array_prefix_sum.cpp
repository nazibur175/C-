#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int a[n+1][m+1];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
            cin>>a[i][j];
    }
    int pre[n+1][m+1];
    pre[0][0]=a[0][0];
    for(int i=1;i<m;i++) pre[0][i]=a[0][i]+pre[0][i-1];
    for(int i=1;i<n;i++) pre[i][0]=a[i][0]+pre[i-1][0];
    for(int i=1;i<n;i++){
        for(int j=1;j<m;j++){
            pre[i][j]=pre[i-1][j]+pre[i][j-1]+a[i][j]-pre[i-1][j-1];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
            cout<<pre[i][j]<<" ";
        cout<<endl;
    }
}