#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
   test{
    int n;
    cin>>n;
    //vector<pair<int,int>>a;
    vector<pair<int,int>>b;
    map<int,int>a;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        //a.push_back({i,x});
        a[i]=x;
    }
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        b.push_back({x,i});
    }
    int vis[n+9]={0};
    sort(b.begin(),b.end());
    reverse(b.begin(),b.end());
    int ans=0;
    for(auto x:b){
        if(x.first>0 && !vis[a[x.second]]){
            ans+=x.first;
            vis[a[x.second]]=1;
        }
    }
    cout<<ans<<endl;


   }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}