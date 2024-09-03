#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
// choto - boro
bool cmp(pair<int,int>&a, pair<int,int>&b){
    if(a.first==b.first){
        return a.second > b.second;
    }
    return a.first < b.first;
}
void solve(){
    int t;
    scanf("%lld",&t);
    while(t--){
        int n;
        scanf("%lld",&n);
        vector<pair<int,int>>v;
        for(int i=0;i<n;i++) {
            int x,y;
            scanf("%lld%lld",&x,&y);
            v.push_back({x,y});
        }
        sort(v.begin(),v.end(),cmp);
        for(auto x:v){
            //cout<<x.first<<" "<<x.second<<endl;
            printf("%lld %lld\n",x.first,x.second);
        }
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}