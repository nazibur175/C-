#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    int n;
    cin>>n;
    vector<int>v(n+1);
    int presum[n+1]={0};
    for(int i=1;i<=n;i++){
        cin>>v[i];
        presum[i]=presum[i-1]+v[i];
    }
    int pre[n+1]={0};
    deque<pair<int,int>>d;
    for(int i=1;i<=n;i++){
        while(!d.empty() && d.back().first<=v[i]){
            d.pop_back();
        }
        if(d.empty()){
            pre[i]=0;
        }
        else{
            pre[i]=d.back().second;
        }
        d.push_back({v[i],i});
    }
    int post[n+1]={0};
    d.clear();
    for(int i=n;i>=1;i--){
        while(!d.empty() && d.back().first<=v[i]){
            d.pop_back();
        }
        if(d.empty()){
            post[i]=0;
        }
        else{
            post[i]=d.back().second;
        }
        d.push_back({v[i],i});
    }
    // for(int i=1;i<=n;i++){
    //     cout<<pre[i]<<" ";
    // }
    // cout<<endl;
    // for(int i=1;i<=n;i++){
    //     cout<<post[i]<<" ";
    // }
    int ans=0;
    for(int i=1;i<=n;i++){
        int l=pre[i];
        int r=post[i];
        if(l==0 || r==0) continue;
        int x=min(v[l],v[r]);
        int temp = x*(r-l-1);
        int sum=presum[r-1]-presum[l];
        ans=max(ans,temp-sum);
    }
    cout<<ans<<endl;

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}