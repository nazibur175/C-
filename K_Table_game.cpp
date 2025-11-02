#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    for(int i=1;i<=100000000;i++){
        if(i%666==0){
            //cout<<i<<endl;
            string s=to_string(i);
            string ss=s;
            reverse(ss.begin(),ss.end());
            if(s==ss) cout<<s<<endl;
        }
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}