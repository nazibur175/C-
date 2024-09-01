#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,k;
        cin>>n>>k;
        map<int,int>m;
        int a[n];
        int x[n];
        for(int i=0;i<n;i++)cin>>a[i];
        for(int i=0;i<n;i++)cin>>x[i];
        vector<pair<int,int>>v;
        for(int i=0;i<n;i++){
            if(x[i]>0)
            v.push_back({x[i],i});
            else 
                v.push_back({(-1LL)*x[i],i});
        }
        sort(v.begin(),v.end());
        int presum=0;
        int f=1;
        for(auto val:v){
            presum+=a[val.second];
            if(val.first*k<presum){
                f=0;
                break;
            }
        }
        if(f) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}