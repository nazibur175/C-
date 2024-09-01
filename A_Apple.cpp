#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    int n,kk;
    cin>>n>>kk;
    int a[n+9][n+9];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++) cin>>a[i][j];
    }
    int ans=0;
    vector<int>v;
    for(int i=2;i<=n;i++){
        v.push_back(i);
    }
    do {
        //for(auto x:v) cout<<x<<" ";
        //cout<<endl;
        vector<int>d;
        d.push_back(1);
        for(auto x:v) d.push_back(x);
        d.push_back(1);
        //for(auto x:d) cout<<x<<" ";
        //cout<<endl;
         int temp=0;
         int nn=d.size();
         for(int i=0;i<n;i++){
             temp+=a[d[i]][d[i+1]];
             //cout<<d[i]<<"->"<<d[i+1]<<"->";
        }
        cout<<endl;
        if(temp==kk) ans++;

    } 
    while (next_permutation(v.begin(), v.end()));
    cout<<ans<<endl;
}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}