#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    int n=12;
    int ans =0;
    for(int i=1;i<=n;i++){
        string s;
        cin>>s;
        if(s.size()==i){
            ans++;
        }
    }
    cout<<ans<<endl;
    

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}