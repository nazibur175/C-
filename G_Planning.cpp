#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    int n,k;
    cin>>n>>k;
    //int a[n];
    vector<pair<int,int>>v;
    //vector<pair<int,int>>vv;
    int kk=k;
    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        v.push_back({x,i});
    }
    multiset<pair<int,int>>ms;
    for(int i=0;i<(k+1);i++){
        ms.insert({v[i].first*kk,v[i].second});
        kk--;
    }
    vector<int>ans;
    int in = k+1;
    while (ms.size())
    {
        
        auto [a,b]=*(--ms.end());
        ans.push_back(b);
        ms.erase(--ms.end());
        if(in<n){
            ms.insert({v[in].first,v[in].second});
            in++;
        }
    }
    for(auto x:ans) cout<<x<<" ";
    cout<<endl;
    
    vector<pair<int,int>>ans2;
    for(int i=0;i<ans.size();i++){
        int min = k+i+1;
        v[ans[i]-1].second=min;
    }
    int cost = 0;
    int i=1;
    for(auto x:v){
        //cout<<x.second<<" ";
        cost += x.first*(x.second-i);
        i++;
    }
    cout<<cost<<endl;
    for(auto x:v){
        cout<<x.second<<" ";
    }

    
}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}