#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
template<typename T>using ordered_set =tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
#define int long long
#define test int T; cin >> T; while (T--)

void solve() {
    test {
        int n; cin >> n;
        vector<int> p(n+1);
        for (int i = 1; i <= n; i++) {
            cin >> p[i];
        }
        ordered_set<int> os;
        int inv=0;
        for(int i=1;i<=n;i++){
            inv+= os.size() - os.order_of_key(p[i] + 1);
            os.insert(p[i]);
        }
        for(int i=n;i>=1;i--){
            int x=2*n - p[i];
            if(x==p[i]) continue;
            os.erase(os.find(p[i]));
            int t1=os.size() - os.order_of_key(p[i] + 1);
            int t2=os.size() - os.order_of_key(x + 1);
            if(t1<=t2){
                os.insert(p[i]);
            }
            else {
                os.insert(x);
                inv-=t1;
                inv+=t2;
            }
        }
        cout << inv << "\n";
    }
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}