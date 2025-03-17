#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin>>n;
        int ans=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            //cout<<(__bit_width(x))<<endl;
            ans+=x;
        }
        cout<<ans-(n-1)<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}