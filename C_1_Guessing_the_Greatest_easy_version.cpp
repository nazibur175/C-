#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)

int query(int l, int r) {
    if (l >= r) return -1;
    cout << "? " << l + 1 << ' ' << r + 1 << endl;
    int ans;
    cin >> ans;
    return ans - 1;
}
void solve(){
    int n;
    cin >> n;
    int l = 0, r = n;
    while (r-l>1) {
        int m = (l+r)/2;
        int smax=query(l, r - 1);
        if (smax<m) {
            if (query(l, m - 1) == smax) {
                r = m;
            } else {
                l = m;
            }
        } 
        else {
            if (query(m, r - 1) == smax) {
                l = m;
            } else {
                r = m;
            }
        }
    }
    cout << "! " << r << endl;

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}