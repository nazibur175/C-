#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    map<string,int>m;
    for(int i=0;i+k-1<n;i++){
        string temp = s.substr(i,k);
        m[temp]++;
    }
    //cout<<m["o"]<<endl;
    int mx=0;
    for(auto x:m){
        mx=max(mx,x.second);
    }
    // cout<<mx<<endl;
    vector<string>ans;
    for(auto x:m){
        if(x.second==mx){
            ans.push_back({x.first});
        }
    }
    cout<<mx<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<ans[i];
        if(i!=ans.size()-1) cout<<" ";
        else cout<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}