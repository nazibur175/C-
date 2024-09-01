#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    int n;
    cin>>n;
    int a[n+9];
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    int ans =0;
    int pre=0;
    unordered_map<int,int>m;
    m[pre]++;
    for(int i=1;i<=n;i++){
       pre=(pre+a[i])%n;
       while (pre<0)
       {
        pre+=n;
       }
       
        ans+=m[pre%n];
        m[pre%n]++;
    }
    cout<<ans<<endl;

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}