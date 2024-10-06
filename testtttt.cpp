#include<bits/stdc++.h>
using namespace std;
#define int long long
#define double long double
#define endl '\n'
#define faster() ios_base::sync_with_stdio(false);cin.tie(NULL); cout.tie(NULL);

const int N = 1e7;
int vis[N + 1], pre[N + 1];

void prime() {
    for (int i = 3; i * i <= N; i += 2) {
        if (vis[i] == 0) {
            for (int j = i * i; j <= N; j += i)
                vis[j] = 1;
        }
    }
    vis[0] = vis[1] = 1;
    vis[2] = 0;
    for (int i = 4; i <= N; i += 2) vis[i] = 1;
    pre[5] = 1;
    for (int i = 3; i <= N; ++i) {
        if (vis[i] == 0 && vis[i - 2] == 0) pre[i] += 1;
        pre[i] += pre[i - 1];
    }
}

void sol(int tt){
    int n;
    cin >> n;
    cout << "Case #" << tt << ": " << pre[n] << endl;
}

int32_t main(){
    faster();
    freopen("metaa.in", "r", stdin);
    freopen("metaa.out", "w", stdout);
    prime();
    int tt = 1;
    cin >> tt;
    for (int i = 1; i <= tt; ++i) sol(i);
    return 0;
}