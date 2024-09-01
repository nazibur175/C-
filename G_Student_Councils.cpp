#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
vector<int>v;
int k;
int ok(int x){
    int sum=0;
    for(auto val:v){
        sum+=min(val,x);
    }
    return k*x<=sum;
}
void solve(){
    cin>>k;
    int n;
    cin>>n;
    v.resize(n);
    for(int i=0;i<n;i++) cin>>v[i];
    int l=0;
    int r=1e16;
    while (l<=r)
    {
        int mid= (l+r)/2;
        if(ok(mid)){
            l=mid+1;
        }
        else r=mid-1;
    }
    cout<<l-1<<endl;
}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}