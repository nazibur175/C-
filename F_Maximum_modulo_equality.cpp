#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
#define test  \
    int t;    \
    cin >> t; \
    while (t--)
const int N = 1e6;
const int M = 25;
int m[N][M];
int query(int l, int r)
{
    int length = r - l + 1;
    int k = 31 - __builtin_clz(length);
    return __gcd(m[l][k], m[r - (1 << k) + 1][k]);
}

void solve()
{
    test
    {
        int n, q;
        cin >> n >> q;
        for (int i = 0; i < n + 9; i++)
        {
            for (int j = 0; j < M; j++)
            {
                m[i][j] = 0;
            }
        }
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        vector<int> dif(n);
        for (int i = 1; i < n; i++)
        {
            dif[i - 1] = abs(a[i] - a[i - 1]);
        }

        for (int i = 0; i < n - 1; i++)
        {
            m[i][0] = dif[i];
        }

        for (int k = 1; k < M; k++)
        {
            for (int i = 0; i + (1 << k) <= n - 1; i++)
            {
                m[i][k] = __gcd(m[i][k - 1], m[i + (1 << (k - 1))][k - 1]);
            }
        }

        while (q--)
        {
            int l, r;
            cin >> l >> r;
            l--;
            r--;
            if (l == r)
            {
                cout << 0 << " ";
            }
            else
            {
                cout << query(l, r - 1) << " ";
            }
        }
        cout << endl;
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
