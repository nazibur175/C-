#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)

string cal(int n){
    if(n==1) return "A";
    string temp=cal(n-1);
    return temp+char(64+n)+temp;
}
void solve(){
    int n;
    cin>>n;
    string ans = cal(n);
    cout<<ans;

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}