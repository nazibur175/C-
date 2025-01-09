#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        map<int,int>m;
        for(int i=0;i<n;i++){
            m[a[i]]++;
        }
        int ans=0;
        vector<int>v;
        for(auto x:m){
            v.push_back(x.second);
        }
        sort(v.begin(),v.end());
        for(auto x:v){
            if(k>=x){
                k-=x;
            }
            else ans++;
        }
        ans=max(1ll,ans);
        cout<<ans<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}