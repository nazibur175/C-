#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
#define test int t; cin >> t; while (t--)

void solve() {
    string s, ss;
    cin >> s >> ss;
    int n = s.size();
    int nn = ss.size();
    map<char, set<int>> st; 

    for (int i = 0; i < nn-1; i++) {
        st[ss[i]].insert(i);
    }

    int mnlen = LLONG_MAX; 
    int in1 = -1, in2 = -1;


    for (int i = 0; i < n; i++) {
        if (st[s[i]].empty()) 
            continue;

        int temp = *st[s[i]].rbegin();
        int len = i + 1 + nn - temp - 1;

        if (len < mnlen) {
            mnlen = len;
            in1 = i;
            in2 = temp + 1;
        }
   
    }

    if (in1 == -1 || in2 == -1) { 
        cout << "-1" << endl;
        return;
    }

    string ans;
    
    for (int i = 0; i <= in1; i++) ans += s[i];
    for (int i = in2; i < nn; i++) ans += ss[i];

    cout << ans << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
