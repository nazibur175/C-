#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        for(int i=1;i<=n;i++){
            if(i==1) cout<<1;
            else cout<<i+(i-1);
            if(i==n) cout<<endl;
            else cout<<" ";
        }
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}