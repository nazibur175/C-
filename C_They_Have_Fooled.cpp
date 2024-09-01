#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    int n;
    cin>>n;
    map<int,int>m;
    m[0]=10;
    m[1]=10;
    m[2]=8;
    m[3]=9;
    m[4]=8;
    m[5]=7;
    m[6]=7;
    m[7]=7;
    m[8]=7;
    m[9]=0;
    m[10]=9;
    m[11]=6;
    m[12]=8;
    cout<<m[n]<<endl;
}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}