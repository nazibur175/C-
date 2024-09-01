#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
#define test  \
    int t;    \
    cin >> t; \
    while (t--)
void solve()
{
    test
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int f = 1;
        if (n % 2 == 1)
        {
            cout << -1 << endl;
            continue;
        }
        vector<int> cnt(26);
        for (int i = 0; i < n; ++i)
        {
            cnt[s[i] - 'a']++;
        }
        if (f)
            for (int i = 0; i < 26; ++i)
            {
                if (cnt[i] * 2 > n)
                {
                    cout << -1 << endl;
                    f = 0;
                    break;
                }
            }
        int pairs = 0;
        vector<int> cnt_pairs(26);
        for (int i = 0; i * 2 < n; ++i)
        {
            if (s[i] == s[n - i - 1])
            {
                pairs++;
                cnt_pairs[s[i] - 'a']++;
            }
        }
        if (f)
            for (int i = 0; i < 26; ++i)
            {
                if (cnt_pairs[i] * 2 > pairs)
                {
                    cout << cnt_pairs[i] << endl;
                    f = 0;
                    break;
                }
            }
        if (f)
            cout << (pairs + 1) / 2 << endl;
    }
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}