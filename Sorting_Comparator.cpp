#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
struct st
{
    string s;
    int val;
};
bool cmp(st x,st y){
    if(x.val==y.val){
        return x.s<y.s;
    }
    return x.val>y.val;
}
void solve(){
    int n;
    cin>>n;
    vector<st>v;
    for(int i=0;i<n;i++) {
        string s;
        int val;
        cin>>s>>val;
        v.push_back({s,val});
    }

    sort(v.begin(),v.end(),cmp);

    for(auto x:v){
        cout<<x.s<<" "<<x.val<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}