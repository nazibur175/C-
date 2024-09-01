#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    int n,x;
    cin>>n>>x;

    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int f=0;
    for(int i=0;i<n;i++){
        int need = x-v[i];
        auto it = binary_search(v.begin(),v.end(),need);
        
    }
    if(f==0) cout<<"IMPOSSIBLE"<<endl;
    

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}