#include<bits/stdc++.h>
using namespace std;

int main(){
    int node, edges;
    cin>>node>>edges;
    int a[node+1][edges+1];
    for(int i=1;i<=node;i++){
        for(int j=1;j<=edges;j++){
            a[i][j]=0;
        }
    }
    
    for(int i=1;i<=edges;i++){
        int x,y;
        cin>>x>>y;
        a[x][y]=1;
        a[y][x]=1;
    }
    for(int i=1;i<=node;i++){
        for(int j=1;j<=edges;j++){
           cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

}
//node edges