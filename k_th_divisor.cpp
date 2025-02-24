#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    int n,k;
    cin>>n>>k;
    vector<int>v;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            v.push_back(i);
            if(i!=n/i) v.push_back(n/i);
        }
    }
    sort(v.begin(),v.end());
    if(k>v.size()) cout<<"-1"<<endl;
    else cout<<v[k-1]<<endl; 

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}