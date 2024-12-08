#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    int n;
    cin>>n;
    map<int,int> mp;
    int mx=0;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        mp[x]=y;
        mx=max(mx,x);
    }
    int sum=0;
    for(int i=1;i<=mx;i++){
        sum=max(0ll,sum-1);
        sum+=mp[i];
    }
    cout<<sum<<endl;

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}