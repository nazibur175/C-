#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
void solve(){
    int n;
    string s;
    cin>>n>>s;
    if (n % 2 == 0) {
        cout << "No" << endl;
        return ;
    }

    int md = (n + 1) / 2;
    for (int i = 0; i < md - 1; ++i) {
        if (s[i] != '1') {
            cout << "No" << endl;
            return ;
        }
    }

    if (s[md - 1] != '/') {
        cout << "No" << endl;
        return ;
    }

    for (int i = md; i < n; ++i) {
        if (s[i] != '2') {
            cout << "No" << endl;
            return ;
        }
    }

    cout << "Yes" << endl;

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}