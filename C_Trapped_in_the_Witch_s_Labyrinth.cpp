#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
#define test  \
    int t;    \
    cin >> t; \
    while (t--)
int n, m;
char a[1001][1001];
int vis[1001][1001];
bool is_valid(int i, int j)
{
    return (i >= 0 && j >= 0 && i < n && j < m);
}
pair<int, int> get(int i, int j, char ch)
{
    int x = i, y = j;
    if (ch == 'U')
        x -= 1;
    else if (ch == 'D')
        x += 1;
    else if (ch == 'L')
        y -= 1;
    else if (ch == 'R')
        y += 1;
    return {x, y};
}

int dfs(int i, int j)
{
    if (vis[i][j])
    {
        if (a[i][j] == 'X')
            return 0;
        else
            return 1;
    }
    vis[i][j] = 1;
    if (a[i][j] == 'U')
    {
        auto p = get(i, j, 'U');

        if (is_valid(p.first, p.second))
        {
            int res = dfs(p.first, p.second);
            if (res == 0)
            {
                a[i][j] = 'X';
                return 0;
            }
            else
                return 1;
        }
        else
        {
            a[i][j] = 'X';
            return 0;
        }
    }
    else if (a[i][j] == 'D')
    {
        auto p = get(i, j, 'D');
        if (is_valid(p.first, p.second))
        {
            int res = dfs(p.first, p.second);
            if (res == 0)
            {
                a[i][j] = 'X';
                return 0;
            }
            else
                return 1;
        }
        else
        {
            a[i][j] = 'X';
            return 0;
        }
    }
    else if (a[i][j] == 'L')
    {
        auto p = get(i, j, 'L');
        if (is_valid(p.first, p.second))
        {
            int res = dfs(p.first, p.second);
            if (res == 0)
            {
                a[i][j] = 'X';
                return 0;
            }
            else
                return 1;
        }
        else
        {
            a[i][j] = 'X';
            return 0;
        }
    }
    else if (a[i][j] == 'R')
    {
        auto p = get(i, j, 'R');
        if (is_valid(p.first, p.second))
        {
            int res = dfs(p.first, p.second);
            if (res == 0)
            {
                a[i][j] = 'X';
                return 0;
            }
            else
                return 1;
        }
        else
        {
            a[i][j] = 'X';
            return 0;
        }
    }
    else if (a[i][j] == '?')
    {
        int temp = 0;
        auto p = get(i, j, 'D');
        if (is_valid(p.first, p.second))
        {
            temp |= dfs(p.first, p.second);
        }

        p = get(i, j, 'R');
        if (is_valid(p.first, p.second))
        {
            temp |= dfs(p.first, p.second);
        }

        p = get(i, j, 'U');
        if (is_valid(p.first, p.second))
        {
            temp |= dfs(p.first, p.second);
        }

        p = get(i, j, 'L');
        if (is_valid(p.first, p.second))
        {
            temp |= dfs(p.first, p.second);
        }
        if (temp == 0)
        {
            a[i][j] = 'X';
            return 0;
        }
    }
    a[i][j] = 'Y';
    return 1;
}

void solve()
{
    test
    {
        cin >> n >> m;
        for (int i = 0; i <= n; i++)
        {
            for (int j = 0; j <= m; j++)
            {
                vis[i][j] = 0;
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (!vis[i][j])
                {
                    int temp = dfs(i, j);
                }
            }
        }

        int ans = 0;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (a[i][j] != 'X')
                    ans++;
            }
        }
        cout << ans << endl;
    }
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}