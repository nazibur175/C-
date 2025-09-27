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
        vector<int> a(n + 1);
        vector<int> b(n + 1);
        for (int i = 1; i <= n; ++i)
        {
            cin >> a[i];
        }
        for (int i = 1; i <= n; ++i)
        {
            cin >> b[i];
        }
        vector<int> mxa(n + n + 1);
        vector<int> mxb(n + n + 1);
        int p = 1;
        for (int i = 2; i <= n; ++i)
        {
            if (a[i] != a[i - 1])
            {
                mxa[a[i - 1]] = max(mxa[a[i - 1]], i - p);
                p = i;
            }
        }
        mxa[a[n]] = max(mxa[a[n]], n - p + 1);

        p = 1;
        for (int i = 2; i <= n; ++i)
        {
            if (b[i] != b[i - 1])
            {
                mxb[b[i - 1]] = max(mxb[b[i - 1]], i - p);
                p = i;
            }
        }
        mxb[b[n]] = max(mxb[b[n]], n - p + 1);

        int ans = 0;
        for (int i = 1; i <=2*n; ++i)
        {
            ans = max(ans, mxa[i] + mxb[i]);
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