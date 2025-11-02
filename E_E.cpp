#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)

pair<int, int> go[4][70][70],go_s[70][70],go_e[70][70],go_w[70][70];

// 0 -> south
// 1 -> north
// 2 -> east
// 3 -> west

void solve(){
    int n, m;
    cin >> n >> m;

    string a[n], b[n];
    for(int i = 0; i < n; i++) cin >> ar[i];
    for(int i = 0; i < n; i++) cin >> br[i];

    // South
    for(int j = 0; j < n; j++){
        pair<int, int> p = {-1, -1};
        for(int i = 0; i < n; i++){
            if(ar[i][j] == '#') {
                go[0][i][j] = {-1, -1};
                p = {-1, -1};
            }
            else if(p == {-1, -1}){
                p = {i, j};
                go[0][i][j] = p;
            }
            else{
                go[0][i][j] = p;
            }
        }
    }

    // North
    for(int j = 0; j < n; j++){
        pair<int, int> p = {-1, -1};
        for(int i = n - 1; i >= 0; i--){
            if(ar[i][j] == '#') {
                go[1][i][j] = {-1, -1};
                p = {-1, -1};
            }
            else if(p == {-1, -1}){
                p = {i, j};
                go[1][i][j] = p;
            }
            else{
                go[1][i][j] = p;
            }
        }
    }

    // East
    for(int i = 0; i < n; i++){
        pair<int, int> p = {-1, -1};
        for(int j = 0; j < n; j++){
            if(ar[i][j] == '#') {
                go[2][i][j] = {-1, -1};
                p = {-1, -1};
            }
            else if(p == {-1, -1}){
                p = {i, j};
                go[2][i][j] = p;
            }
            else{
                go[2][i][j] = p;
            }
        }
    }
    // West
    for(int i = 0; i < n; i++){
        pair<int, int> p = {-1, -1};
        for(int j = n - 1; j >= 0; j--){
            if(ar[i][j] == '#') {
                go[3][i][j] = {-1, -1};
                p = {-1, -1};
            }
            else if(p == {-1, -1}){
                p = {i, j};
                go[3][i][j] = p;
            }
            else{
                go[3][i][j] = p;
            }
        }
    }

}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}