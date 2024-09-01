#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
int isBoundary(int x1,int y1,int x2, int y2,int x, int y){
    int ans = (x-x1)*(y1-y2) - (x1-x2)*(y-y1);
    int onseg = 0 ;
    if(max(x1,x2)>= x && min(x1,x2)<=x && max(y1,y2)>=y && min(y1,y2)<=y){
        onseg = 1;
    }
    if(ans ==0 && onseg ==1){
        return 1;
    }
    else 
    return 0;

}
int pointPosition(int x1,int y1,int x2, int y2,int x, int y){
    int ans = (x-x1)*(y1-y2) - (x1-x2)*(y-y1);
    if(ans == 0){
        return 0;
    }
    else if(ans>0)
        return 1;
    else 
        return 2;

}
int isInside(int x1,int y1,int x2, int y2,int x, int y,int x4,int y4){
   
    // y4++;
    int o1=pointPosition(x1,y1,x2,y2,x,y);
    int o2=pointPosition(x1,y1,x2,y2,x4,y4);
    int o3=pointPosition(x,y,x4,y4,x1,y1);
    int o4=pointPosition(x,y,x4,y4,x2,y2);
    if(o1!=o2 && o3!=o4){
        return 1;
    }
    else return 0;
}
void solve(){
    int n,m;
    cin>>n>>m;
    vector<pair<int,int>>vertices;
    vector<pair<int,int>>points;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        vertices.push_back({x,y});
    }
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        points.push_back({x,y});
    }
    for(auto p:points){
    bool isB=false;
    int c = 0;
        for(int i=0;i<n;i++){
            int x1=vertices[i].first;
            int y1=vertices[i].second;
            int x2= vertices[(i+1)%n].first;
            int y2=vertices[(i+1)%n].second;
            int x3=p.first;
            int y3=p.second;
            int x4=(int)INT32_MAX;
            int y4=(int)INT32_MAX + 2;
            if(isBoundary(x1,y1,x2,y2,x3,y3)){
                isB=true;
                break;
            }

            if(isInside(x1,y1,x2,y2,x3,y3, x4, y4)){
                c++;
            }
        }
            if(isB) cout<<"BOUNDARY"<<endl;
            else if(c%2) cout<<"INSIDE"<<endl;
            else cout<<"OUTSIDE"<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}