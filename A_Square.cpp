#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
int calculateDistance(int x1, int y1, int x2, int y2) {
    int dis = (x2 - x1)*(x2 - x1) +(y2 - y1)*(y2 - y1);
    return dis;
}
void solve(){
    test{
        int x1,y1;
        cin>>x1>>y1;
        int x2,y2;
        cin>>x2>>y2;
        int x3,y3;
        cin>>x3>>y3;
        int x4,y4;
        cin>>x4>>y4;
        int ab= calculateDistance(x1,y1,x2,y2);
        int ac= calculateDistance(x1,y1,x3,y3);
        int ad= calculateDistance(x1,y1,x4,y4);
        map<int,int>m;
        m[ab]++;
        m[ac]++;
        m[ad]++;
        if(m[ab]>=2) cout<<ab<<endl;
        else if(m[ac]>=2) cout<<ac<<endl;
        else if(m[ad]>=2) cout<<ad<<endl;
       
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}