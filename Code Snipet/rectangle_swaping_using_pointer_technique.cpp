// Given a 2D array. Q queries with 2 ractangle(4 points) swap the two rectangle elements
// Print the final array after all queries
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, q;
    cin >> n >> m >> q;

    vector<vector<int>> val(n, vector<int>(m));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> val[i][j];

    // position mapping
    vector<vector<pair<int,int>>> pos(n, vector<pair<int,int>>(m));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            pos[i][j] = {i, j};

    while (q--) {
        int x1, y1, x2, y2, x3, y3, x4, y4;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
        --x1; --y1; --x2; --y2;
        --x3; --y3; --x4; --y4;

        int h = x2 - x1 + 1;
        int w = y2 - y1 + 1;

        for (int i = 0; i < h; i++) {
            for (int j = 0; j < w; j++) {
                swap(pos[x1 + i][y1 + j], pos[x3 + i][y3 + j]);
            }
        }
    }

    // Build final array
    vector<vector<int>> ans(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            auto [x, y] = pos[i][j];
            ans[i][j] = val[x][y];
        }
    }

    // Output
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            cout << ans[i][j] << ' ';
        cout << '\n';
    }
}
