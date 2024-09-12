#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
bool cmp(pair<int, int>&x , pair<int,int>&y){
    __int128_t xx=  x.first*(y.second);
    __int128_t yy= y.first*(x.second);
    if(xx==yy){
        return x.first<y.first;
    }
    return xx<yy;
}
void solve(){
    test{
        int n;
        cin>>n;
        int a[n+1];
        int b[n+1];
        for(int i=1;i<=n;i++) cin>>a[i];
        for(int i=1;i<=n;i++) cin>>b[i];

        vector<pair<int,int>>v;
        for(int i=1;i<=n;i++){
            v.push_back({a[i],b[i]});
        }
        sort(v.begin(),v.end(),cmp);
        int cnt=0;
        int mx=0;
        for(int i=0;i<n;i++){
            if(mx<v[i].first) {
                cnt++;
                mx= max(mx,v[i].first);
            }
        }
        cout<<cnt<<endl;
        
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}