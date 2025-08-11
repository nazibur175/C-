#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        vector<int> a(n);
        map<int,int> mp;
        for(int i=0;i<n;i++){
            cin>>a[i];
            mp[a[i]]++;
        }
        int mx_cnt=0;
        for(auto &it : mp){
            mx_cnt=max(mx_cnt,it.second);
        }
        int ans=0;
        while(mx_cnt<n){
            ans++;
            ans+=min(mx_cnt,n-mx_cnt);
            mx_cnt*=2;
        }
        cout<<ans<<"\n";
        
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}