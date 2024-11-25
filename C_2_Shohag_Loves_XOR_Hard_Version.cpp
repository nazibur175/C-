#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
#define test  \
    int t;    \
    cin >> t; \
    while (t--)
int leftmostsetbit(int n)
{
    int m = 0;
    while (n > 0)
    {
        m++;
        n = n >> 1;
    }
    return m;
}
void solve()
{
    test
    {
        int x, m;
        cin >> x >> m;
        // divisible by x

        int p = m - m % x;
        int ans = p / x - (x < p);

        if ((x ^ p) >= 1 and (x ^ p) <= m)
            ++ans;
        p += x;
        if ((x ^ p) >= 1 and (x ^ p) <= m)
            ++ans;

        // divisibly by y
        for (int y = 1; y <= min(1LL * x, m); y++)
        {
            int cur = x ^ y;
            if (cur % y == 0)
            {
                ++ans;
            }
        }

        // divisible by both
        if (x <= m)
        {
            --ans;
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