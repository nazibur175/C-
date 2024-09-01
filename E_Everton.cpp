#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    int n,k;
    cin>>n>>k;
    int c;
    cin>>c;
    vector<int>v;
    v.push_back(0);
    for(int i=1;i<=c;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int ans=c;
    for(int i=1;i<v.size();i++){
        ans+=(v[i]-v[i-1]-1)/k;
    }
    ans+=(n-v.back())/k;
    cout<<ans<<endl;

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}