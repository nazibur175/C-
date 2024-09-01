#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
int d(string str) {
    int n=0;
    for (char dig:str) {
            n = n*10+(dig-'0');
    }
    return n;
}
void solve(){
    int n,k;
    cin>>n>>k;
    int ans=0;
    int val=1;
    for(int i=1;i<=n;i++){
        string num = to_string(val);
        string s=num;
        reverse(s.begin(),s.end());
        string pal= num+s;
        int nn= d(pal);
        ans= (ans%k + nn%k)%k;
        val++;
    }
    cout<<ans<<endl;

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}