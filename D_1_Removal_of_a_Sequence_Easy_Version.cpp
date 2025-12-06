#include<bits/stdc++.h>
using namespace std;
#define int long long 
#define   mod             1000000007
#define test int t; cin>>t; while(t--)
const int N = 1e5 + 9;
const long long INF = 4000000000000000000LL;

long long removedUpto(long long m, long long x, long long y){
    long long cur = y, removed = 0;
    for(long long i = 1; i <= x; ++i){
        if(cur > m) break;
        removed += m / cur;
        if(cur > INF / y) break;
        cur *= y;
    }
    return removed;
}

bool ok(long long mid, long long x, long long y, long long k){
    long long rem = removedUpto(mid, x, y);
    long long pos = mid - rem;
    return pos < k;
}

void solve(){
    test{
        long long x, y, k;
        cin >> x >> y >> k;
        if(y == 1){
            cout << -1 << "\n";
            continue;
        }
        long long l = 0, r = INF;
        while(r - l > 1){
            long long mid = (l + r) / 2;
            if(ok(mid, x, y, k)) l = mid;
            else r = mid;
        }
        long long rem = removedUpto(r, x, y);
        long long pos = r - rem;
        if(pos >= k) cout << r << "\n";
        else cout << -1 << "\n";
    }
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
