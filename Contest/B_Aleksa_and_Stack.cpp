#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    test{
    int n,k,x;
    cin>>n>>k>>x;
    int a = (k * (k + 1)) / 2;
    int b = (n * (n + 1)) / 2 - (n - k) * (n - k + 1) / 2;
    if (x >= a && x <= b) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}