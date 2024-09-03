#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    string s="abb";
    int n;
    cin>>n;
    int x=n/4;
    for(int i=1;i<=x;i++){
        s+="aabb";
    }
    cout<<s.substr(0,n)<<endl;

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}