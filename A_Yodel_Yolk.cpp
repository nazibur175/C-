#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int l=0;
    vector<pair<int,int>>v;
    for(int i=0;i<n-1;i++){
        if(a[i]>=a[i+1]){
            continue;
        }
        else {
            v.push_back({l,i+1});
            if(a[i+1]>=a[l]){
                l=i+1;
            }
        }
    }
    int f=0;
    sort(v.rbegin(),v.rend());
    int ans=0;
    for(auto x:v){
        int l=x.first;
        int r=x.second;
        cout<<l<<" "<<r<<endl;
        for(int i=l;i<=r;i++){
            if(a[i]<=a[l])
            ans+= a[l]-a[i];

        }
        if(ans){
            break;
        }
    }
    cout<<ans<<endl;

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}