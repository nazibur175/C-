#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
template <typename T>
struct BIT2D {
    int n, m;
    vector<vector<T>> bit;

    // Constructor to initialize the BIT with dimensions n_ and m_
    BIT2D(int n_, int m_) : n(n_), m(m_) {
        bit.assign(n + 1, vector<T>(m + 1, 0));
    }

    // Updates the value at (x, y) by adding 'val'
    // Coordinates are 1-indexed
    void update_point(int x, int y, T val) {
        for (int i = x; i <= n; i += (i & -i)) {
            for (int j = y; j <= m; j += (j & -j)) {
                bit[i][j] += val;
            }
        }
    }

    // Queries the prefix sum in rectangle (1,1) .. (x,y)
    T query_prefix(int x, int y) const {
        T sum = 0;
        for (int i = x; i > 0; i -= (i & -i)) {
            for (int j = y; j > 0; j -= (j & -j)) {
                sum += bit[i][j];
            }
        }
        return sum;
    }

    // Queries the sum in rectangle (x1,y1) .. (x2,y2)
    T query_rectangle(int x1, int y1, int x2, int y2) const {
        return query_prefix(x2, y2)
             - query_prefix(x1 - 1, y2)
             - query_prefix(x2, y1 - 1)
             + query_prefix(x1 - 1, y1 - 1);
    }
};
void solve(){
    int n,m;
    cin>>n>>m;
    char ch[n+1][n+1];
    BIT2D<int>bit(n,n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>ch[i][j];
            if(ch[i][j]=='*'){
                bit.update_point(i,j,1);
            }
        }
    }
    while(m--){
        int type;
        cin>>type;
        if(type==1){
            int x,y;
            cin>>x>>y;
            if(ch[x][y]=='*'){
                ch[x][y]='.';
                bit.update_point(x,y,-1);
            }
            else {
                ch[x][y]='*';
                bit.update_point(x,y,1);
            }
        }
        else {
            int x1,y1,x2,y2;
            cin>>x1>>y1>>x2>>y2;
            cout<<bit.query_rectangle(x1,y1,x2,y2)<<endl;
        }
    }



}
int32_t main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
solve();

}