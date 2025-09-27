#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
        int n;
        cin >> n;
        int k = 0;
        while((1 << (k + 1)) <= n - 1) 
            k++; 
        for(int i = (1 << k) - 1; i >= 0; i--) {
            cout << i << ' ';
        }
        for(int i = (1 << k); i < n; i++) {
            cout << i << ' ';
        }
        cout << '\n';
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}