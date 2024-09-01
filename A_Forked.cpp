#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int a,b;
        cin>>a>>b;
        int x,y;
        cin>>x>>y;
        int m,n;
        cin>>m>>n;
        set<pair<int,int>>ma1,ma2;
        ma1.insert({x+a,y+b});
        ma1.insert({x+a,y-b});
        ma1.insert({x-a,y+b});
        ma1.insert({x-a,y-b});

        ma1.insert({x+b,y+a});
        ma1.insert({x+b,y-a});
        ma1.insert({x-b,y+a});
        ma1.insert({x-b,y-a});

        ma2.insert({m+a,n+b});
        ma2.insert({m+a,n-b});
        ma2.insert({m-a,n+b});
        ma2.insert({m-a,n-b});

        ma2.insert({m+b,n+a});
        ma2.insert({m+b,n-a});
        ma2.insert({m-b,n+a});
        ma2.insert({m-b,n-a});

        int ans=0;
        set<pair<int,int>>temp;
        int xxx=ma1.size()+ma2.size();

        for(auto xx:ma1){
            temp.insert(xx);
        }
        for(auto xx:ma2){
            temp.insert(xx);
        }
        cout<<xxx-temp.size()<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}