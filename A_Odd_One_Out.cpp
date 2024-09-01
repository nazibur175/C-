#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        map<int,int>m;
        for(int i=0;i<3;i++){
            int x;
            cin>>x;
            m[x]++;
        }
        for(auto x:m)if(x.second==1){
             cout<<x.first<<endl;
             break;
        }
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}