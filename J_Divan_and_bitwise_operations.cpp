#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int N=2e5+9;
int precal[N];

void solve(){
    precal[0]=1;
    precal[1]=2;
    for(int i=2;i<=N-9;i++){
        precal[i]=(precal[i-1]*2)%mod;
    }

    
    test{
        int n,q;
        cin>>n>>q;
        int bit_or=0;
        while (q--)
        {
            int l,r,x;
            cin>>l>>r>>x;
            bit_or|=x;
        }
        int ans = ((precal[n-1]%mod) * (bit_or%mod))%mod;
        cout<<ans<<endl;
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}