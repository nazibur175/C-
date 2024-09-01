#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    vector<int>vv;
    vv.push_back(v[0]);
    for(int i=1;i<n;i++){
        int x=lower_bound(vv.begin(),vv.end(),v[i])-vv.begin();
        // cout<<x<<endl;
        if(x<vv.size())
        vv[x]=v[i];
        else 
        vv.push_back(v[i]);

    }
    cout<<vv.size()<<endl;

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}
