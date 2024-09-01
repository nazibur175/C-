#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    int n;
    cin>>n;
    int a[4]={0,1,1,0};
    for(int i=0;i<(1<<n);i++){
        int x=i>>1;
        x=i^x;
        bitset<32>b(x);
        string s = b.to_string();
        // cout<<s<<endl;
        cout << s.substr(32 - n) << endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}