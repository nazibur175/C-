#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    int  n;
    cin>>n;
    map<int,int>m;
    for(int i=0;i<n;i++) {
        int x;
        cin>>x;
        m[x]++;
    }
    cout<<m.size()<<endl;

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}