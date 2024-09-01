#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    vector<int>v;
    test{
        int a,x;
        cin>>a>>x;
        if(a==1){
            v.push_back(x);
        }
        else {
            cout<<v[v.size()-x]<<endl;
        }
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}