// #include <bits/stdc++.h>
// using namespace std;

// const int MAXV = 100000 + 5;

// int parent[MAXV];  // mapping parent of each value

// int find_set(int x) {
//     if (parent[x] == x) return x;
//     return parent[x] = find_set(parent[x]);  // path compression
// }

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int n, q;
//     cin >> n >> q;
//     vector<int> a(n + 1);

//     for (int i = 1; i <= n; i++) cin >> a[i];

//     // initialize mapping
//     for (int i = 0; i < MAXV; i++) parent[i] = i;

//     while (q--) {
//         int type;
//         cin >> type;

//         if (type == 1) {
//             int x, y;
//             cin >> x >> y;
//             if (x == y) continue;
//             // merge x into y
//             int px = find_set(x);
//             int py = find_set(y);
//             if (px != py) parent[px] = py;
//         }
//         else if (type == 2) {
//             int idx;
//             cin >> idx;
//             cout << find_set(a[idx]) << '\n';
//         }
//     }

//     return 0;
// }




// Technique two - small to large
#include <bits/stdc++.h>
using namespace std;

unordered_map<long long,long long> parent;

long long findp(long long x){
    auto it = parent.find(x);
    if(it == parent.end()){
        parent[x] = x;
        return x;
    }
    if(parent[x] == x) return x;
    return parent[x] = findp(parent[x]);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    if(!(cin >> n >> q)) return 0;

    vector<long long> a(n+1);
    for(int i = 1; i <= n; ++i){
        cin >> a[i];
        if(parent.find(a[i]) == parent.end()) parent[a[i]] = a[i];
    }

    while(q--){
        int type; cin >> type;
        if(type == 1){
            long long x, y; cin >> x >> y;
            long long rx = findp(x);
            long long ry = findp(y);
            if(rx != ry){
                // IMPORTANT: ensure rx -> ry (all x become y)
                parent[rx] = ry;
            }
        } else {
            int idx; cin >> idx;
            cout << findp(a[idx]) << '\n';
        }
    }
    return 0;
}
