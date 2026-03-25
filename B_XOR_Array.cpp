#include<bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
#define test int t; cin>>t; while(t--)
const int N = 1e5 + 9;

void solve(){
    test{
        int n,l,r;
        cin>>n>>l>>r;

        int pre[n+1];
        pre[0] = 0;
        for(int i=1;i<=n;i++){
            pre[i]=i;
        }
        pre[r]=pre[l-1];

        int ans[n+1];
        for(int i=1;i<=n;i++){
            ans[i]=pre[i]^pre[i-1];
        }
        
        for(int i=1;i<=n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<"\n";
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}
