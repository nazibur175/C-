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
    m[pre]++;
    for(int i=1;i<=n;i++){
        pre=(pre+a[i])%n;
        // if(pre[i]%n==0) ans++;
        // if(m.find(pre[i]%n) != m.end()){
        //     ans+=m[pre[i]%n];
        // }
        // else if(m[pre[i]-k]) ans+=m[pre[i]-k];
        while (pre<0)
        {
           pre+=n;
        }
        
        ans+=m[pre%n];
        m[pre%n]++;
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
solve();

}