#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
int dis(int x,int y,int xx, int yy){
    return ((x-xx)*(x-xx) + (y-yy)*(y-yy));
}
void solve(){
    test{
        int n;
        cin>>n;
        vector<pair<int,int>>v;
        for(int i=0;i<n;i++){
            int x,y;
            cin>>x>>y;
            v.push_back({x,y});
        }
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int distance = dis(a,b,c,d);

        int mn=INT64_MAX;
        for(int i=0;i<n;i++){
            int x=v[i].first;
            int y= v[i].second;
           
            mn = min(dis(c,d,x,y),mn);
        }

        if(mn<=distance) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;

    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}