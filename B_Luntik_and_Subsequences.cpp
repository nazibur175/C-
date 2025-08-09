#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin >> n;
        int cnt0 = 0, cnt1 = 0;
        for (int i = 1; i <= n; ++i) {
            int x;
            cin >> x;
            if (x==0)
                 cnt0++;
            if (x==1)
                 cnt1++;
        }
         cout << (1ll<<cnt0) * cnt1 << '\n';
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}