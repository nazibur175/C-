#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007

void solve() {
    int a[9 + 1][9 + 1];

    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= 9; j++) {
            cin >> a[i][j];
        }
    }

    int f = 1; 

    for (int i = 1; i <= 9; i++) {
        set<int> row, col;
        for (int j = 1; j <= 9; j++) {
    
            if (a[i][j] < 1 || a[i][j] > 9 || a[j][i] < 1 || a[j][i] > 9) {
                f = 0;
                break;
            }
            if (row.count(a[i][j])) {
                f = 0;
                break;
            }
            row.insert(a[i][j]);
            if (col.count(a[j][i])) {
                f = 0;
                break;
            }
            col.insert(a[j][i]);
        }
        if (!f) break;
    }

    map<pair<int, int>, set<int>> mp;
    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= 9; j++) {
            pair<int, int> grid = {(i - 1) / 3, (j - 1) / 3};
            if (mp[grid].count(a[i][j])) {
                f = 0;
                break;
            }
            mp[grid].insert(a[i][j]);
        }
        if (!f) break;
    }

    if(a[1][4]!=8 || a[1][6]!=1) f=0;
    if(a[2][7]!=4 || a[2][8]!=3) f=0;
    if(a[3][1]!=5) f=0;
    if(a[4][5]!=7 || a[4][7]!=8) f=0;
    if(a[5][7]!=1) f=0;
    if(a[6][2]!=2 || a[6][5]!=3) f=0;
    if(a[7][1]!=6 || a[7][8]!=7 || a[7][9]!=5) f=0;
    if(a[8][3]!=3 || a[8][4]!=4) f=0;
    if(a[9][4]!=2 || a[9][7]!=6) f=0;

    if (f)
        cout << "Congratulations!" << endl;
    else
        cout << "Oh No!" << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
}
