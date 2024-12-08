#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
#define test  \
    int t;    \
    cin >> t; \
    while (t--)

int H, W, D;
vector<string> g;
vector<pair<int, int>> dot;

void cal(int x, int y, set<pair<int, int>> &humid)
{
    for (int dx = -D; dx <= D; dx++)
    {
        int lim = D - abs(dx);
        for (int dy = -lim; dy <= lim; ++dy)
        {
            int nx = x + dx, ny = y + dy;
            if (nx >= 0 && nx < H && ny >= 0 && ny < W && g[nx][ny] == '.')
                humid.insert({nx, ny});
        }
    }
}


void solve()
{
    cin >> H >> W >> D;
    g.resize(H);
    for (int i = 0; i < H; ++i)
    {
        cin >> g[i];
        for (int j = 0; j < W; ++j)
            if (g[i][j] == '.')
                dot.push_back({i, j});
    }

    int ans = 0;
    for (int i = 0; i < dot.size(); i++)
    {
        for (int j = i + 1; j < dot.size(); j++)
        {
            set<pair<int, int>> humid;
            cal(dot[i].first, dot[i].second, humid);
            cal(dot[j].first, dot[j].second, humid);
            ans = max(ans, (int)humid.size());
        }
    }

    cout << ans << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
