#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
vector<int>v[200005];
int arr[200005];
int n;
int pos(int po){
    int val=arr[po];
    int idx=lower_bound(v[val].begin(),v[val].end(),po)-v[val].begin();
    int next=idx+val-1;
    if(next<v[val].size()){
        return v[val][next]+1;
    }
    else{
        return 0;
    }
}

int dp[200005];
int f(int po){
    if(po==n+1){
        return 0;
    }
    if(dp[po]!=-1){
        return dp[po];
    }
    int ans=0;
    ans=f(po+1);
    int next=pos(po);
    if(next!=0){
        ans=max(ans,arr[po]+f(next));
    }
    return dp[po]=ans;
}
void solve(){
    test{
        cin>>n;
        for(int i=1;i<=n;i++){
            v[i].clear();
            arr[i]=0;
            dp[i]=-1;
        }
        for(int i=1;i<=n;i++){
           cin>>arr[i];
           v[arr[i]].push_back(i);
        }
        cout<<f(1)<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}