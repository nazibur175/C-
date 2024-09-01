#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)

void solve(){
    int n;
    cin>>n;
    int a[n];
    map<int,int>m;
    vector<int>v;
    for(int i=0;i<n;i++){
        cin>>a[i];
        m[a[i]]++;
        v.push_back(a[i]);
    }
    sort(v.begin(),v.end());
    // for(auto x:v) cout<<x<<" ";
    // cout<<endl;
    int x=m[v.front()];
    int y=m[v.back()];
    //cout<<x<<" "<<y<<endl;
    int ans1=v.back()-v.front();
    int ans2=x*y;
    if(v.back()==v.front()){
        ans1=0;
        ans2=(n*(n-1))/2;
    }
    
    cout<<ans1<<" "<<ans2<<endl;


}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}