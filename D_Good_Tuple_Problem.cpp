#include<bits/stdc++.h>
using namespace std;
bool vis[1000000],col[1000000];
vector<int>edge[1000000];

bool dfs(int node,int clr){
    vis[node]=true;
    col[node]=clr;
    for(int child : edge[node]){
        if(!vis[child]){
            if(dfs(child,clr^1)==false) return false;
        }
        else 
            {
                if(col[node]==col[child])return false;
            }
    }
    return true;
}
int main(){
   int n,m;
   cin>>n>>m;
   int a[m+9];
   for(int i=0;i<m;i++){
    cin>>a[i];
   }
   int b[m+9];
   for(int i=0;i<m;i++){
    cin>>b[i];
   }

    set<pair<int,int>>s;
   for(int i=0;i<m;i++){
        int x=a[i];
        int y=b[i];
        s.insert({x,y});
        s.insert({y,x});
   }

   for(auto val:s){
    int x=val.first;
    int y=val.second;
    edge[x].push_back(y);
    edge[y].push_back(x);
    //cout<<x<<"  "<<y<<endl;


   }
   bool no =1;
    for(int i=1;i<=n;i++){
        if(!vis[i])
            no=dfs(i,1);
        if(no==0) break;
    }

    if(no)
        cout<<"Yes"<<endl;
    else 
        cout<<"No"<<endl;
   
}