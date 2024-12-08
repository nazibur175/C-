#include <bits/stdc++.h>
using namespace std;
#define int long long
#define test  \
    int t;    \
    cin >> t; \
    while (t--)

int H, W, D;
vector<string> grid;
int vis[1000 + 9][1000 + 9];
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

int bfs()
{
    queue<pair<pair<int, int>, int>> q;
    int humid = 0;

    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            if (grid[i][j] == 'H')
            {
                q.push({{i, j}, 0});
                vis[i][j] = true;
                humid++;
            }
        }
    }

    while (!q.empty())
    {
        auto [cell, dist] = q.front();
        q.pop();

        int x = cell.first, y = cell.second;
        if (dist >= D)
            continue;

        for (int dir = 0; dir < 4; dir++)
        {
            int nx = x + dx[dir];
            int ny = y + dy[dir];

            if (nx >= 0 && nx < H && ny >= 0 && ny < W && !vis[nx][ny] && grid[nx][ny] == '.')
            {
                vis[nx][ny] = true;
                humid++;
                q.push({{nx, ny}, dist + 1});
            }
        }
    }

    return humid;
}

void solve()
{
    cin >> H >> W >> D;
    grid.resize(H);
    memset(vis, 0, sizeof(vis));
    for (int i = 0; i < H; i++)
    {
        cin >> grid[i];
    }
    cout << bfs() << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
