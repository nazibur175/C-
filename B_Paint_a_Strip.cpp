#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        if(n==1){
            cout<<1<<endl;
            continue;
        }   
        int ans=2;
        int cnt=4;
        while(cnt<n){
            cnt*=2;
            cnt+=2;
            ans++;
        }
        cout<<ans<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}