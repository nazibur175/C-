#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
    int n;
    cin>>n;
    int a[n+1];
    map<int,int>m;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        m[a[i]]++;
    }

    int mx=0;
    int cnt=0;
    map<int,vector<pair<int,int>>>mp;
    int l=0;
    int r=0;
    for(int i=1;i<=n;i++){
        if(m[a[i]]==1){
            cnt++;
            mx=max(cnt,mx);
        }
        else {
            cnt=0;
        }
        if(cnt==1){
            l=i;
            r=i;
            mp[r-l+1].push_back({l,r});
        }
        else if(cnt>1){
            r=i;
            mp[r-l+1].push_back({l,r});
        }
        else {
            l=0;
            r=0;
        }
    }
    
    if(mx==0) cout<<0<<endl;
    else cout<<mp[mx].back().first<<" "<<mp[mx].back().second<<endl;


    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}