#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
#define test  \
    int t;    \
    cin >> t; \
    while (t--)

void solve()
{
    int n, m;
    cin >> n >> m;

    ll ans = 0;
    vector<ll> alada;
    ll vv = -1, cc = n;
    while (cc--)
    {
        int a, b;
        cin >> a >> b;
        if (n == 1)
        {
            cout << b << endl;
            return;
        }
        ans += a;
        if (b > a)
        {
            alada.push_back(b - a);
        }
        else
        {
            vv = a - b;
        }
    }

    ll sz = alada.size();
    sort(alada.rbegin(), alada.rend());
    if (sz == (n - 1))
    {
        ll ff = 0;
        if (m >= (n * 2 - 1))
        {
            ff = n;
        }
        else
        {
            ff = m - n;
        }

        if (ff >= sz)
        {
            for (ll i = 0; i < sz - 1; i++)
            {
                ans += alada[i];
            }
            if (sz!=0 && vv < alada[sz - 1])
            {
                ans += (alada[sz - 1] - vv);
            }
            cout << ans << endl;
        }
        else
        {
            ff = min(sz, ff);
            for (ll i = 0; i < ff; i++)
            {
                ans += alada[i];
            }
            cout << ans << endl;
        }
    }
    else
    {
        ll ff = 0;
        if (m >= (n * 2 - 1))
        {
            ff = n;
        }
        else
        {
            ff = m - n;
        }

        ff = min(sz, ff);
        for (ll i = 0; i < ff; i++)
        {
            ans += alada[i];
        }
        cout << ans << endl;
    }
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}