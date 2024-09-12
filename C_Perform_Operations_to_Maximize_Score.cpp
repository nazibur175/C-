#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define mod 1000000007
#define test int t; cin>>t; while(t--)
int n, k;
map<int, int> m;

int is_ok(int mid, const vector<pair<int, int>>& v, int kk) {
    int th = n / 2;
    int lagbe = (n - 1) - th + 1;
    int cnt = 0;
    int sz = v.size();

    for (int i = sz - 1; i >= 0; i--) {
        if (v[i].first >= mid) {
            cnt++;
        } else if (m[v[i].second] == 1 && (mid - v[i].first) <= kk) {
            cnt++;
            kk -= (mid - v[i].first);
        }
        if (cnt >= lagbe) {
            return true;
        }
    }
    return false;
}

int binary_search(const vector<pair<int, int>>& v, int kk, int max_element) {
    int l = 0;
    int r = max_element + kk;  

    while (l <= r) {
        int mid = (l + r) / 2;
        if (is_ok(mid, v, kk)) {
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    return l - 1;
}

void solve() {
    test {
        cin >> n >> k;
        vector<pair<int, int>> va(n);
        for (int i = 0; i < n; i++) {
            cin >> va[i].first;
            va[i].second = i + 1;
        }

        m.clear();
        for (int i = 1; i <= n; i++) {
            cin >> m[i];
        }

        sort(va.begin(), va.end());


        int max_element = va.back().first;

 
        vector<pair<int, int>> tempa(va.begin(), va.end() - 1);
        int ans1 = va.back().first + binary_search(tempa, k, max_element);


        int mx = 0;
        pair<int, int> p;
        for (int i = 0; i < n; i++) {
            int val = va[i].first;
            if (m[va[i].second] == 1) {
                val += k;
            }
            if (val > mx) {
                mx = val;
                p = va[i];
            }
        }

        
        vector<pair<int, int>> tempb;
        for (int i = 0; i < n; i++) {
            if (va[i] != p) {
                tempb.push_back(va[i]);
            }
        }

        int ans2 = mx + binary_search(tempb, 0, max_element);

        cout << max(ans1, ans2) << endl;
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
