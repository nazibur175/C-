#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
vector<int>z_maker(string &s){
    int sz=s.size();
    vector<int>zv(sz);
    int l=0,r=0;
    for(int i=1;i<sz;i++){
        if(i<=r){
            zv[i]=min(zv[i-l],r-i+1);
        }
        while(i+zv[i]<sz && s[zv[i]]==s[i+zv[i]]){
            zv[i]++;
        }
        if(i+zv[i]-1>r){
            l=i,r=i+zv[i]-1;
        }

    } 
    return zv;  
}
void solve(){
    string s="abbaabba";
    vector<int>v=z_maker(s);
    cout<<s<<endl;
    for(auto x:v) cout<<x<<" ";
    cout<<endl;
}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}