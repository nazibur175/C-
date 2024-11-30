#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
int query(int l, int r) {
    cout << "? " << l << " " << r << endl;
    int ans;
    cin >> ans;
    return ans;
}
 
void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 1; i < n; i++) {
        a[i] = query(1, i + 1);
    }
    if (a==vector(n, 0LL)) {
        cout << "! IMPOSSIBLE" << endl;
        return;
    }
    int i = 0;
    while (a[i] == 0) i++;
    
    string s(n, '0');
    for (int j = 0; j < i - a[i]; j++) {
        s[j] = '1';
    }
    for (int j = i; j < n; j++) {
        s[j] = (a[j] > a[j - 1] ? '1' : '0');
    }
    cout << "! " << s << endl;
}

int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
    test{
        solve();
    }
}