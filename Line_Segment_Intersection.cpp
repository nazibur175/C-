#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
int position(int xa,int ya,int xb,int yb,int x,int y){
    int val = (x-xa)*(ya-yb) - (xa-xb)*(y-ya); 
    if(val ==0 ) return 0;
    else if(val > 0) return 1;
    else return 2;
}
bool onsegment(int x1,int y1,int x2,int y2,int x,int y){
    return (x<=max(x1,x2) && x>=min(x1,x2) && y<=max(y1,y2) && y>=min(y1,y2));
}
void solve(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        //(x1,y1) & (x2,y2)
        // (x3,y3) & (x4,y4)
        int x1,y1,x2,y2,x3,y3,x4,y4;
        cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
        if((position(x1,y1,x2,y2,x3,y3)+position(x1,y1,x2,y2,x4,y4)==3) && 
        (position(x3,y3,x4,y4,x1,y1)+position(x3,y3,x4,y4,x2,y2)==3))
        {
            cout<<"YES"<<endl;
        }
        else if(position(x1,y1,x2,y2,x3,y3)==0 && onsegment(x1,y1,x2,y2,x3,y3))
        cout<<"YES"<<endl;
        else if(position(x1,y1,x2,y2,x4,y4)==0 && onsegment(x1,y1,x2,y2,x4,y4))
        cout<<"YES"<<endl;
        else if( position(x3,y3,x4,y4,x1,y1)==0 && onsegment(x3,y3,x4,y4,x1,y1))
        cout<<"YES"<<endl;
        else if( position(x3,y3,x4,y4,x2,y2)==0 && onsegment(x3,y3,x4,y4,x2,y2))
        cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}