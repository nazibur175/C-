#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n,m,k;
        cin>>n>>m>>k;
        int rep= n/(m+1);
        // M occurance will be removed and 1 extra occurance for MEX
        int mx=max(rep,k);
        for(int i=0;i<n;i++){
            cout<<i%mx<<" ";
        }
        cout<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}