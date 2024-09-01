#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
int area(vector<pair<int,int>>v){
    int ans =0;
    int n=v.size();
    for(int i=0;i<n;i++){
        int x1=v[i].first;
        int y1=v[i].second;
        int x2=v[(i+1)%n].first;
        int y2=v[(i+1)%n].second;
        ans += (x1*y2-x2*y1);
    }
    return abs(ans);
}
int b_latis(vector<pair<int,int>>v){
    int n= v.size();
    int c=0;
    for(int i=0;i<n;i++){
        int x1=v[i].first;
        int y1=v[i].second;
        int x2=v[(i+1)%n].first;
        int y2=v[(i+1)%n].second;
        c+=__gcd(abs(x1-x2),abs(y1-y2))-1;
    }
    return c+n;
}
void solve(){
    int n;
    cin>>n;
    vector<pair<int,int >> points;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        points.push_back({x,y});
    }
    int A =  (area(points))/2;
    int b = b_latis(points);
    
    cout<<A+1-b/2<<" "<<b<<endl;
 
 
}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();
 
}
