#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    int n;
    cin>>n;
    int a[n]={0};
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    int pre[n+9]={0};
    unordered_map<int,int>m;
    int ans = 0;
    for(int i=1;i<=n;i++){
        pre[i]=a[i]+pre[i-1];
        if(pre[i]%n==0) ans++;
        if(m.find(pre[i]%n) != m.end()){
            ans+=m[pre[i]%n];
            // cout<<i<<"-------"<<pre[i]%n<<endl;
        }
        // else if(m[pre[i]-k]) ans+=m[pre[i]-k];
        m[pre[i]]+=1;
    }
    cout<<ans<<endl;

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}