#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int N = 2e5 + 9;
int a[N][20];
void solve(){
    for (int i=1; i<N; i++) {
        for (int k=0; k<20; k++) {
            a[i][k]=a[i-1][k] + (i>>k&1);
        }
    }
    test{
        int l,r;
        cin>>l>>r;
        int ans=r-l+1;
        for (int k=0; k<20; k++) {
            ans = min(ans,(r-l+1)-a[r][k] + a[l-1][k]);
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