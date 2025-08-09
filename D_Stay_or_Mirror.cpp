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
        vector<int> p(n);
        for (int i = 0; i < n; i++)
            cin >> p[i];
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            int left = 0, right = 0;
            for (int j = 0; j < i; j++)
                if (p[j] > p[i])
                    left++;
            for (int j = i + 1; j < n; j++)
                if (p[j] > p[i])
                    right++;
            ans += min(left, right);
        }
        cout << ans << '\n';
    }
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}