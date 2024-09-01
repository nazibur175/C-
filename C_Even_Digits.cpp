#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
int solve(){
    
    map<int,int>m;
    m[0]=0;
    m[1]=2;
    m[2]=4;
    m[3]=6;
    m[4]=8;
    int n;
    cin>>n;
    if(n==1) {
        cout<<0<<endl;
        return 0;
    }
    n--;
    vector<int>convert;
    while (n)
    {
        convert.push_back(n%5);
        n/=5;
    }
    reverse(convert.begin(),convert.end());
    // for(auto x:convert) cout<<x;
    // cout<<endl;
    for(auto x:convert) cout<<m[x];
    cout<<endl;
    return 0;
}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}