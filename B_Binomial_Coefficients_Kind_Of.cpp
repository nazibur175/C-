#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int N=1e6;
void solve(){
    int t;
    cin>>t;
    vector<int>v(t);
    vector<int>vv(t);
    for(int i=0;i<t;i++) cin>>v[i];
    for(int i=0;i<t;i++) cin>>vv[i];

    vector<int>ans;
    int temp=1;
    for(int i=1;i<=N;i++){
        ans.push_back(temp);
        temp*=2;
        temp%=mod;
    }

    for(auto x:vv){
        cout<<ans[x]<<endl;
    }
    
    

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}