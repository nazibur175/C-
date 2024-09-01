#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    int n;
    cin>>n;
    int a[n+9]={0};
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    int pre=0;
    int ans = 0;
    unordered_map<int,int>m;
    // m[pre]=-1;
    for(int i=1;i<=n;i++){
        pre=(pre+a[i])%7;
        // ans+=m[pre%7];
        if(pre%7==0){
            ans=i;
        }
        else if(m[pre%7]==0)
            m[pre%7]=i;
        else {
            int x = i-m[pre%7];
            ans=max(ans,x);
        }
        //cout<<a[i]<<" "<<pre<<" "<<pre%n<<" "<<m[pre%n]<<" "<<ans<<endl;
    }
    cout<<ans<<endl;
    // for(auto x:m){
    //     cout<<x.first<<" "<<x.second<<endl;
    // }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
#ifndef ONLINE_JUDGE
        freopen("div7.in", "r", stdin);
        freopen("div7.out", "w", stdout);
    #endif
solve();

}