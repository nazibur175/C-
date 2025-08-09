#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        string s;
        cin>>s;
        int c0=0,c1=0;
        for(auto i:s){
            if(i=='0') c0++;
            else c1++;
        }
        if(min(c0,c1)%2==0){
            cout<<"NET"<<endl;
        }
        else {
            cout<<"DA"<<endl;
        }
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}